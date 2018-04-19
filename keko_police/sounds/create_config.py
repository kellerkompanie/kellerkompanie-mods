import glob

for ogg_file in glob.glob("*.ogg"):
	name = '"keko_police_' + ogg_file[:-4] + '";'
	sound = '{"\\keko_police\\sounds\\' + ogg_file + '", 1, 1, 100};'
	titles = '{ 1, "' + ogg_file[3:-4].replace("_", " ") + '"};'
	print('class keko_police_' + ogg_file[:-4] + "\n{\n\tname =" + name + "\n\tsound[] = " + sound + "\n\ttitles[] = " + titles + "\n};")


print("")
print("")

for ogg_file in glob.glob("*.ogg"):
	print ('keko_police_' + ogg_file[:-4])