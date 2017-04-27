#include "lex/lex.h"
#include "comp.h"

int main(int argc, char **argv)
{
    //Ensure that a command line argument is passed
    if (argc != CORRECT_ARGS)
    {
        puts("Invalid argument count. Exiting...");
        exit(INVALID_ARGS);
    }
    //Open file for reading
    
    //Begin compilation process
    start_compile(argv[1]);

    return COMP_SUCCESS;
}
