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
    char* output;
    switch (currentChar)
    {
        case 'a':
            strncat(builtString, "a", 1);
            break;
        case 'b':
            strncat(builtString, "b", 1);
            break;
        case 'c':
            strncat(builtString, "c", 1);
            break;
        case 'd':
            strncat(builtString, "d", 1);
            break;
        case 'e':
            strncat(builtString, "e", 1);
            break;
        case 'f':
            strncat(builtString, "f", 1);
            break;
        case 'g':
            strncat(builtString, "g", 1);
            break;
        case 'h':
            strncat(builtString, "h", 1);
            break;
        case 'i':
            strncat(builtString, "i", 1);
            break;
        case 'j':
            strncat(builtString, "j", 1);
            break;
        case 'k':
            strncat(builtString, "k", 1);
            break;
        case 'l':
            strncat(builtString, "a", 1);
            break;
        case 'm':
            strncat(builtString, "m", 1);
            break;
        case 'n':
            strncat(builtString, "n", 1);
            break;
        case 'o':
            strncat(builtString, "o", 1);
            break;
        case 'p':
            strncat(builtString, "p", 1);
            break;
        case 'q':
            strncat(builtString, "q", 1);
            break;
        case 'r':
            strncat(builtString, "r", 1);
            break;
        case 's':
            strncat(builtString, "s", 1);
            break;
        case 't':
            strncat(builtString, "t", 1);
            break;
        case 'u':
            strncat(builtString, "u", 1);
            break;
        case 'v':
            strncat(builtString, "v", 1);
            break;
        case 'w':
            strncat(builtString, "w", 1);
            break;
        case 'x':
            strncat(builtString, "x", 1);
            break;
        case 'y':
            strncat(builtString, "y", 1);
            break;
        case 'z':
            strncat(builtString, "z", 1);
            break;
        case ' ':
            printf("%s", compare_to_keyword(builtString));
            break;
        case ',':
            printf("%s", compare_to_keyword(builtString));
            break;
        case '(':
            printf("%s", compare_to_keyword(builtString));
            break;
        case ')':
            printf("%s", compare_to_keyword(builtString));
            break;
        case '\n':
            printf("%s", compare_to_keyword(builtString));
        default:
            break;
    }
    return;
}