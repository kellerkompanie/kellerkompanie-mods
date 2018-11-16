#include <string>
#include <vector>
#include <iterator>
#include <sstream>

#define CURRENT_VERSION "1.0.0.1"

extern "C"
{
	//--- Engine called on extension load 
	__declspec (dllexport) void __stdcall RVExtensionVersion(char *output, int outputSize);
	//--- STRING callExtension STRING
	__declspec (dllexport) void __stdcall RVExtension(char *output, int outputSize, const char *function);
	//--- STRING callExtension ARRAY
	__declspec (dllexport) int __stdcall RVExtensionArgs(char *output, int outputSize, const char *function, const char **args, int argsCnt);
}

//--- Extension version information shown in .rpt file
void __stdcall RVExtensionVersion(char *output, int outputSize)
{
	//--- max outputSize is 32 bytes
	strncpy_s(output, outputSize, CURRENT_VERSION, _TRUNCATE);
}

//--- name callExtension function
void __stdcall RVExtension(char *output, int outputSize, const char *function)
{
	std::string str = function;
	strncpy_s(output, outputSize, ("Input Was: " + str).c_str(), _TRUNCATE);
}

//--- name callExtension [function, args]
int __stdcall RVExtensionArgs(char *output, int outputSize, const char *function, const char **args, int argsCnt)
{
	if (strcmp(function, "fnc1") == 0)
	{
		//--- Manually assemble output array
		int i = 0;
		std::string str = "[";

		//--- Each argument can be accessed via args[n]
		if (argsCnt > 0)
			str += args[i++];

		while (i < argsCnt)
		{
			str += ",";
			str += args[i++];
		}

		str += "]";

		//--- Extension result
		strncpy_s(output, outputSize, str.c_str(), _TRUNCATE);

		//--- Extension return code
		return 100;
	}

	else if (strcmp(function, "fnc2") == 0)
	{
		//--- Parse args into vector
		std::vector<std::string> vec(args, std::next(args, argsCnt));

		std::ostringstream oss;
		if (!vec.empty())
		{
			//--- Assemble output array
			std::copy(vec.begin(), vec.end() - 1, std::ostream_iterator<std::string>(oss, ","));
			oss << vec.back();
		}

		//--- Extension result
		strncpy_s(output, outputSize, ("[" + oss.str() + "]").c_str(), _TRUNCATE);

		//--- Extension return code
		return 200;
	}

	else
	{
		strncpy_s(output, outputSize, "Avaliable Functions: fnc1, fnc2", outputSize - 1);
		return -1;
	}
}