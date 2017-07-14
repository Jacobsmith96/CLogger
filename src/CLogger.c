#include "CLogger.h"

const char *CLogFile = "LogFile.clog";
FILE *fp;

void openCLogger(){
	fp = fopen(CLogFile, "w");
}

void closeCLogger(){
	fclose(fp);
}

int clogger(char *toClog){
	fprintf(fp, "[CLOG]: ");
	fprintf(fp, "%s\n", toClog);
	return 0;
}

int cloggerWarning(char *toClog){
	fprintf(fp, "[WARNING]: ");
	fprintf(fp, "%s\n", toClog);
	return 0;
}

int cloggerError(char *toClog){
	fprintf(fp, "[ERROR]: ");
	fprintf(fp, "%s\n", toClog);
	return 0;
}
