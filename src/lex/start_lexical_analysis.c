/* start_lexical_analysis.c
 * --version: 0.01
 * --author: matthew kempey
 * --summary: begins the lexical analysis process.
 *            - for each line, call inspect Line
 */

#include "lex.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
void start_lexical_analysis(FILE *fp)
{
    char line[128];
    //builtString = "";
    //Read until the end of the file
    while (fgets(line, sizeof(line), fp))
    {
        inspect_line(line);
    } //end while
    return;

} //end start_lexical_analysis
