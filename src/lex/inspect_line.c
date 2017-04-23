/* inspect_line.c
 * 
 * --author: matthew kempey
 * --summary: inspects a line passed in from the file pointer and prints
 * the output, and begins the switch to start comparing characters
 *
 *
 */

#include "lex.h"

void inspect_line(char line[])
{
    //Print the string , watches for '\n', '\t\, etc.
    if (strlen(line) > 1)
    {
        printf("INPUT: %s", line);
    }

    //Evaluates each character in the 
    for(int i = 0; i < strlen(line); i++)
    {
        evaluate_char(line[i]);
    }

    return;
}
