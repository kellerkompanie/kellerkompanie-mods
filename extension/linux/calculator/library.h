#ifndef CALCULATOR_LIBRARY_H
#define CALCULATOR_LIBRARY_H

void RVExtensionVersion(char *output, int outputSize);
void RVExtension(char *output, int outputSize, const char *function);
int RVExtensionArgs(char *output, int outputSize, const char *function, const char **argv, int argc);

#endif