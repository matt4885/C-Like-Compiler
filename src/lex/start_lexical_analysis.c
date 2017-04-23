/* start_lexical_analysis.c
 * 
 * --author: matthew kempey
 * --summary: begins the lexical analysis process.
 *            - for each line, call inspect Line
 */

#include "lex.h"
#include <string.h>
#include <stdlib.h>

void start_lexical_analysis(FILE *fp)
{
    
    char line[128];

    //Read until the end of the file
    while (fgets(line, sizeof(line), fp))
    {
        inspect_line(line);
    }

    print_symbol_table(&lexum, &type, &scope);

    return;

} //end start_lexical_analysis
