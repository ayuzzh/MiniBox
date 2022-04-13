#include <iostream>
#include <string>

#include <config.h>
#include <applets.hpp>


void usage()
{
	std::cout << "Usage:\n"
BINARY_NAME " --version\n"
BINARY_NAME " --help\n"
BINARY_NAME " --list\n"
BINARY_NAME " command [[arguments]...]\n"
"\n\n"

"MiniBox is tool which can be used as an alternative for Busybox\n"
"and Toybox." << std::endl;

	exit(0);
}

int main(int argc, char *argv[])
{
	char *_argv[argc - 1];
	char *basename_ = basename(argv[0]);
	if (argc > 2)
	{
		for (int i = 0; i < argc; i++)
		{
			_argv[i] = argv[i + 1];
		}
	}
	if (strcmp(basename_, BINARY_NAME) == 0)
	{
		if (argc == 1)
		{
			usage();
		}

		if (argc == 2 && (strcmp(argv[1], "--help") == 0))
		{
			usage();
		}
#if ECHO_BUILD == ON
		else if (argc >= 2 && (strcmp(argv[1], "echo") == 0))
		{
			echo_main(argc-1, _argv);
		}
#endif

		else if (argc >= 2)
		{
			std::cout << "Unknown command: " << argv[1] << std::endl;
		}
	}
	else
	{
		std::cout << "Unknown Command " << argv[0] << std::endl;
	}
}
