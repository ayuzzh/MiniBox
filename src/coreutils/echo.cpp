#include <iostream>
#include <string>

#include <config.h>
#include <applets.hpp>

#if ECHO_BUILD == 1

bool newline = true;
bool interpretation = false;

void just_echo(char* s)
{
	// For checking the interpretation of the string
	// Code for interpretation not written yet
	std::cout << s << " ";
}

void echo_usage()
{
    printf("test usage");
    exit(0);
}

void echo_version()
{
    printf("test versiin");
    exit(0);
}

void option_manager(char *o)
{
    if (strcmp(o, "-") == 0)
    {
        std::cout << o;
    }
    else if (strcmp(o, "-n") == 0)
    {
        if (newline)
        {
            newline = false;
        }
        else
        {
            std::cout << o << " ";
        }
    }
    else if (strcmp(o, "-e") == 0)
    {
        interpretation = true;
    }
    else if (strcmp(o, "-E") == 0)
    {
        interpretation = false;
    }
}

int echo_main(int argc, char *argv[])
{
    if (argc == 2 && (strcmp(argv[1], "--version") == 0))
    {
        echo_version();
    }
    else if (argc == 2 && (strcmp(argv[1], "--help") == 0))
    {
        echo_usage();
    }
    else
    {
        for (int i = 1; i < argc; i++)
        {
            if (argv[i][0] == '-')
            {
                option_manager(argv[i]);
            }
            else
            {
                just_echo(argv[i]);
            }
        }
    }
    if (newline)
    {
        std::cout << "\n";
    }

    exit(0);
}
#endif
