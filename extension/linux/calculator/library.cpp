#include <string>
#include <vector>
#include <iterator>
#include <sstream>
#include <cstring>
#include "json11.h"

#define CURRENT_VERSION "1.0.0.1"

extern "C"
{
//--- Engine called on extension load
__attribute__((dllexport)) void RVExtensionVersion(char *output, int outputSize);
//--- STRING callExtension STRING
__attribute__((dllexport)) void RVExtension(char *output, int outputSize, const char *function);
//--- STRING callExtension ARRAY
__attribute__((dllexport)) int RVExtensionArgs(char *output, int outputSize, const char *function, const char **argv, int argc);
}

//--- Extension version information shown in .rpt file
void RVExtensionVersion(char *output, int outputSize) {
    //--- max outputSize is 32 bytes
    std::strncpy(output, CURRENT_VERSION, outputSize - 1);
}

//--- name callExtension function
void RVExtension(char *output, int outputSize, const char *function) {
    std::string str = function;
    std::strncpy(output, ("Input Was: " + str).c_str(), outputSize - 1);
}

//--- name callExtension [function, args]
int RVExtensionArgs(char *output, int outputSize, const char *function, const char **argv, int argc) {
    if (strcmp(function, "add") == 0) {
        //--- Manually assemble output array
        std::stringstream sstream;
        int i = 0;
        sstream << "[";

        //--- Each argument can be accessed via args[n]
        for (i = 0; i < argc; i++) {
            sstream << argv[i];
            sstream << ",";
        }

        sstream << "]";

        //--- Extension result
        std::strncpy(output, sstream.str().c_str(), outputSize - 1);

        //--- Extension return code
        return 100;
    } else if (strcmp(function, "subtract") == 0) {
        //--- Parse args into vector
        std::vector<std::string> vec(argv, std::next(argv, argc));

        std::ostringstream oss;
        if (!vec.empty()) {
            //--- Assemble output array
            std::copy(vec.begin(), vec.end() - 1, std::ostream_iterator<std::string>(oss, ","));
            oss << vec.back();
        }

        //--- Extension result
        std::strncpy(output, ("[" + oss.str() + "]").c_str(), outputSize - 1);

        //--- Extension return code
        return 200;
    } else if (strcmp(function, "json") == 0) {
        json11::Json my_json = json11::Json::object {
                { "key1", "value1" },
                { "key2", false },
                { "key3", json11::Json::array { 1, 2, 3 } },
        };
        std::string json_str = my_json.dump();

        std::stringstream sstream;
        sstream << json_str;
        std::strncpy(output, sstream.str().c_str(), outputSize - 1);

        return 300;
    } else {
        std::stringstream sstream;
        sstream << "Avaliable Functions: add, subtract, json";
        std::strncpy(output, sstream.str().c_str(), outputSize - 1);
        return -1;
    }
}