/* evaluate_char.c
 * 
 * --author: matthew kempey
 * --summary: compares the current char to [a-z] or set of delimiters
 *
 */

#include "lex.h"

void evaluate_char(char currentChar)
{
    //Add letter to current lexem string
    if (currentChar >= 'A' && currentChar <= 'z')
    {
        strncat(builtString, &currentChar, 1);
        return;
    }

    //Not a letter? We have reached a delimiting character, so we print the string 
    printf("%s", compare_to_keyword(builtString));

    if (currentChar >= '0' && currentChar <= '9')
    {

    }

    //Print the current delimiter
    if (currentChar > 32)
    {
        printf("%c\n", currentChar);
    }
    

    //Empty the lexem string 
    builtString[0] = '\0';
    return;
}
