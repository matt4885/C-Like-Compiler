#include "lex.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
void start_lexical_analysis(FILE *fp)
{
    char line[128];

    //Read until the end of the file
    while (fgets(line, sizeof(line), fp))
    {
        //Print input token
        if (strlen(line) > 1)
        {
            printf("INPUT: %s", line);
        } //end if 

    } //end while
    return;

} //end start_lexical_analysis
