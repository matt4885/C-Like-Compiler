/* evaluate_char.c
 * --version: 0.01
 * --author: matthew kempey
 * --summary: compares the current char to [a-z] or set of delimiters
 *
 */

#include "lex.h"
#include <string.h>

void evaluate_char(char currentChar)
{
    //space
    if (currentChar == 32 || currentChar == '\t')
    {
        //strncat(builtString, " ", 1);
        printf("%s\n", compare_to_keyword(builtString));
        memset(&builtString[0], 0, sizeof(builtString));
        return;
    }

    //!/W
    else if ((currentChar >= 33 && currentChar <= 64) || (currentChar == 123 || currentChar == 125))
    {

        //strncat(builtString, &currentChar, 1);
        if (strlen(builtString) > 1)
            printf("%s\n", compare_to_keyword(builtString));
        printf("%c\n", currentChar);
        memset(&builtString[0], 0, sizeof(builtString));
        return;
    }

    //A-Za-z
    else if (currentChar >= 65 && currentChar <= 122)
    {
        strncat(builtString, &currentChar, 1);
        return;
    }
    return;
}
