#include <config.h>

#ifndef APPLETS
#define APLLETS

int echo_main(int argc, char* argv[]);

void applets_call(int argc, char* argv[]);
void applets_as_main(int argc, char* argv[]);
void usage();
void version();

#endif	/*APPLETS*/
