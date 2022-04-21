#include <iostream>

#include <config.h>
#include <applets.hpp>

#ifndef HEADERS
#define HEADERS

void usage()
{
	std::cout << "Usage:\n"
BINARY_NAME " --version\n"
BINARY_NAME " --help\n"
BINARY_NAME " --list\n"
BINARY_NAME " command [[arguments]...]\n\n"
"MiniBox is tool which can be used as an alternative for Busybox\n"
"and Toybox." << std::endl << std::endl <<
"MiniBox Source Code <https://github.com/ayuzzh/MiniBox>\n"
"Email Us for bugs <kmayushkm@gmail.com>\n";
	exit(0);
}

void version()
{
	std::cout << "Print version here" << std::endl;
	exit(1);
}

#endif
