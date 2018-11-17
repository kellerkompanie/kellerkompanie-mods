#include <string>
#include <vector>
#include <iterator>
#include <sstream>
#include <cstring>
#include "nlohmann_json/single_include/nlohmann/json.hpp"

#define CURRENT_VERSION "1.0.0.1"

extern "C"
{
//--- Engine called on extension load
__attribute__((dllexport)) void RVExtensionVersion(char *output, int outputSize);
//--- STRING callExtension STRING
__attribute__((dllexport)) void RVExtension(char *output, int outputSize, const char *function);
//--- STRING callExtension ARRAY
__attribute__((dllexport)) int
RVExtensionArgs(char *output, int outputSize, const char *function, const char **argv, int argc);
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

        using json = nlohmann::json;

        // create an empty structure (null)
        json j;

        // add a number that is stored as double (note the implicit conversion of j to an object)
        j["pi"] = 3.141;

        // add a Boolean that is stored as bool
        j["happy"] = true;

        // add a string that is stored as std::string
        j["name"] = "Niels";

        // add another null object by passing nullptr
        j["nothing"] = nullptr;

        // add an object inside the object
        j["answer"]["everything"] = 42;

        // add an array that is stored as std::vector (using an initializer list)
        j["list"] = {1, 0, 2};

        // add another object (using an initializer list of pairs)
        j["object"] = {{"currency", "USD"},
                       {"value",    42.99}};

        std::ostringstream oss;
        oss << j;

        //--- Extension result
        std::strncpy(output, oss.str().c_str(), outputSize - 1);

        //--- Extension return code
        return 300;

    } else {
        std::stringstream sstream;
        sstream << "Avaliable Functions: add, subtract";
        std::strncpy(output, sstream.str().c_str(), outputSize - 1);
        return -1;
    }
}