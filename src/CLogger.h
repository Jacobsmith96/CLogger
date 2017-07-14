#ifndef CLOGGER_H
#define CLOGGER_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern const char *CLogFile;

//Functions used to open and close the CLogger
void openCLogger();
void closeCLogger();

//Functions used to output messages, warnings, and errors to the CLog file
int clogger(char *toClog);
int cloggerWarning(char *toClog);
int cloggerError(char *toClog);

#endif