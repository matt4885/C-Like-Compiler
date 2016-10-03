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
    switch (currentChar)
    {
        case 'a':
            strcat(builtString, "a");
            break;
        case 'b':
            strcat(builtString, "b");
            break;
        case 'c':
            strcat(builtString, "c");
            break;
        case 'd':
            strcat(builtString, "d");
            break;
        case 'e':
            strcat(builtString, "e");
            break;
        case 'f':
            strcat(builtString, "f");
            break;
        case 'g':
            strcat(builtString, "g");
            break;
        case 'h':
            strcat(builtString, "h");
            break;
        case 'i':
            strcat(builtString, "i");
            break;
        case 'j':
            strcat(builtString, "j");
            break;
        case 'k':
            strcat(builtString, "k");
            break;
        case 'l':
            strcat(builtString, "a");
            break;
        case 'm':
            strcat(builtString, "m");
            break;
        case 'n':
            strcat(builtString, "n");
            break;
        case 'o':
            strcat(builtString, "o");
            break;
        case 'p':
            strcat(builtString, "p");
            break;
        case 'q':
            strcat(builtString, "q");
            break;
        case 'r':
            strcat(builtString, "r");
            break;
        case 's':
            strcat(builtString, "s");
            break;
        case 't':
            strcat(builtString, "t");
            break;
        case 'u':
            strcat(builtString, "u");
            break;
        case 'v':
            strcat(builtString, "v");
            break;
        case 'w':
            strcat(builtString, "w");
            break;
        case 'x':
            strcat(builtString, "x");
            break;
        case 'y':
            strcat(builtString, "y");
            break;
        case 'z':
            strcat(builtString, "z");
            break;
        case ' ':
            compare_to_keyword(builtString);
        default:
            break;
    }
    return;
}
