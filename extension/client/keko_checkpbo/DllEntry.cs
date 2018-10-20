using RGiesecke.DllExport;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace keko_checkpbo
{
    public class DllEntry // This can be named anything you like
    {


        #region Misc RVExtension Requirements
#if IS_x64
        [DllExport("RVExtensionVersion", CallingConvention = CallingConvention.Winapi)]
#else
        [DllExport("_RVExtensionVersion@8", CallingConvention = CallingConvention.Winapi)]
#endif
        public static void RvExtensionVersion(StringBuilder output, int outputSize)
        {
            outputSize--;
            output.Append("1.0.0");
}
        // This 2 line are IMPORTANT and if changed will stop everything working
        // To send a string back to ARMA append to the output StringBuilder, ARMA outputSize limit applies!
#if IS_x64
        [DllExport("RVExtension", CallingConvention = CallingConvention.Winapi)]
#else
        [DllExport("_RVExtension@12", CallingConvention = CallingConvention.Winapi)]
#endif
        public static void RVExtension(StringBuilder output, int outputSize, [MarshalAs(UnmanagedType.LPStr)] string function)
        {
            outputSize--;

            // Reverses the input string
            char[] arr = function.ToCharArray();
            Array.Reverse(arr);
            string result = new string(arr);
            output.Append(result);
        }

#if IS_x64
        [DllExport("RVExtensionArgs", CallingConvention = CallingConvention.Winapi)]
#else
        [DllExport("_RVExtensionArgs@20", CallingConvention = CallingConvention.Winapi)]
#endif
        #endregion
        public static int RvExtensionArgs(StringBuilder output, int outputSize,
            [MarshalAs(UnmanagedType.LPStr)] string inputKey,
            [MarshalAs(UnmanagedType.LPArray, ArraySubType = UnmanagedType.LPStr, SizeParamIndex = 4)] string[] args, int argCount)
        {
            outputSize--;
            try
            {
                //if (inputKey == SessionKey)
                if (inputKey == "")
                {
                    if (args.Length == 6) // async without await because we don't expect a reply
                        //Discord.HandleRequest(args);
                        output.Append("CORRECT NUMBER OF ARGUMENTS");
                    else
                        output.Append("INCORRECT NUMBER OF ARGUMENTS");
                }
                else
                {
                    Tools.Logger(null, $"Incorrect key used: {inputKey}");
                    output.Append("INCORRECT SESSION KEY");
                }
            }
            catch (Exception e)
            {
                Tools.Logger(e);
            };
            return 1;
}

    }
}
