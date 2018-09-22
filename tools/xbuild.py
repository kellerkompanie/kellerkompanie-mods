#!/usr/bin/env python3

import os
import sys
import subprocess
import argparse
from shutil import copyfile

######## GLOBALS #########
MAINPREFIX = "z"
PREFIX = "keko_"


##########################

def mod_time(path):
    if not os.path.isdir(path):
        return os.path.getmtime(path)
    maxi = os.path.getmtime(path)
    for p in os.listdir(path):
        maxi = max(mod_time(os.path.join(path, p)), maxi)
    return maxi


def check_for_changes(addonspath, module):
    if not os.path.exists(os.path.join(addonspath, "{}{}.pbo".format(PREFIX, module))):
        return True
    return mod_time(os.path.join(addonspath, module)) > mod_time(
        os.path.join(addonspath, "{}{}.pbo".format(PREFIX, module)))


def check_for_obsolete_pbos(addonspath, file):
    module = file[len(PREFIX):-4]
    if not os.path.exists(os.path.join(addonspath, module)):
        return True
    return False


def make_foldersturcture(addonspath):
    os.chdir(addonspath)

    made = 0
    failed = 0
    skipped = 0
    removed = 0

    for file in os.listdir(addonspath):
        if os.path.isfile(file):
            if check_for_obsolete_pbos(addonspath, file):
                removed += 1
                print("  Removing obsolete file => " + file)
                os.remove(file)
    print("")

    for p in os.listdir(addonspath):
        path = os.path.join(addonspath, p)
        if not os.path.isdir(path):
            continue
        if p[0] == ".":
            continue
        if not check_for_changes(addonspath, p):
            skipped += 1
            print("  Skipping {}.".format(p))
            continue

        print("# Making {} ...".format(p))

        try:
            subprocess.check_output([
                "makepbo",
                "-NUP",
                "-@={}\\{}\\addons\\{}".format(MAINPREFIX, PREFIX.rstrip("_"), p),
                p,
                "{}{}.pbo".format(PREFIX, p)
            ], stderr=subprocess.STDOUT)
        except:
            failed += 1
            print("  Failed to make {}.".format(p))
        else:
            made += 1
            print("  Successfully made {}.".format(p))

    print("\n# Done.")
    print("  Made {}, skipped {}, removed {}, failed to make {}.".format(made, skipped, removed, failed))


def clean(projectpath):
    addonspath = os.path.join(projectpath, "addons")
    print("=== CLEANING ===")
    print()

    for file in os.listdir(addonspath):
        if os.path.isfile(os.path.join(addonspath, file)):
            if file.endswith(".pbo"):
                print("  Removing pbo => " + file)
                os.remove(os.path.join(addonspath, file))


def build_addons(projectpath):
    addonspath = os.path.join(projectpath, "addons")
    print()
    print("=== BUILDING ADDONS ===")
    make_foldersturcture(addonspath)


def build_optionals(projectpath):
    optionalspath = os.path.join(projectpath, "optionals")
    print()
    print("=== BUILDING OPTIONALS ===")
    make_foldersturcture(optionalspath)

    addonspath = os.path.join(projectpath, "addons")
    for file in os.listdir(optionalspath):
        if os.path.isfile(os.path.join(optionalspath, file)):
            if file.endswith(".pbo"):
                src = os.path.join(optionalspath, file)
                dst = os.path.join(addonspath, file)
                print("  Copying pbo => " + file)
                copyfile(src, dst)


def main():
    print("""
  ####################
  # KEKO Debug Build #
  ####################
""")

    scriptpath = os.path.realpath(__file__)
    projectpath = os.path.dirname(os.path.dirname(scriptpath))

    parser = argparse.ArgumentParser()
    parser.add_argument("-c", "--clean", help="remove pbos", action="store_true")
    parser.add_argument("-o", "--optionals", help="build optionals", action="store_true")
    args = parser.parse_args()

    if args.clean:
        clean(projectpath)

    build_addons(projectpath)

    if args.optionals:
        build_optionals(projectpath)


if __name__ == "__main__":
    sys.exit(main())
