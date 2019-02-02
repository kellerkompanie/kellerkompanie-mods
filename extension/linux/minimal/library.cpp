#include <string>
#include <cstring>
#include <sstream>
extern "C"
{
__attribute__((dllexport)) void RVExtension(char *output, int outputSize, const char *function);
__attribute__((dllexport)) int RVExtensionArgs(char *output, int outputSize, const char *function, const char **argv, int argc);
__attribute__((dllexport)) void RVExtensionVersion(char *output, int outputSize);
}
void RVExtension(char *output, int outputSize, const char *function)
{
    std::strncpy(output, function, outputSize - 1);
}

int RVExtensionArgs(char *output, int outputSize, const char *function, const char **argv, int argc)
{
    std::stringstream sstream;
    int i;
    for (i = 0; i < argc; i++)
    {
        sstream << argv[i];
    }
    std::strncpy(output, sstream.str().c_str(), outputSize - 1);
    return 0;
}

void RVExtensionVersion(char *output, int outputSize)
{
    std::strncpy(output, "Test-Extension v1.0", outputSize - 1);
}