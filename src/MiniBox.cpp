#include <iostream>
#include <string>

#include <applets.hpp>
#include <config.h>
#include <headers.hpp>

int main(int argc, char *argv[])
{
    char *_basename = basename(argv[0]);
	if (strcmp(_basename, BINARY_NAME) == 0)
	{
		if (argc == 1)
		{
			usage();
		}
		
		else if (argc == 2 && (strcmp(argv[1], "--help") == 0))
		{
			usage();
		}
		
		else if (argc == 2 && (strcmp(argv[1], "--version") == 0))
		{
			version();
		}
		
		else
		{
			applets_call(argc, argv);
		}
	}
	else
	{
		applets_as_main(argc, argv);
	}
}
