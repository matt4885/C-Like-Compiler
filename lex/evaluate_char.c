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
            strcat("a", builtString);
            break;
        case 'b':

            strcat("b", builtString);
            break;
        case 'c':

            strcat("c", builtString);
            break;
        case 'd':
            strcat("d", builtString);
            break;

        case 'e':
            strcat("e", builtString);
            break;

        case 'f':
            strcat("f", builtString);
            break;

        case 'g':
            strcat("g", builtString);
            break;

        case 'h':
            strcat("h", builtString);
            break;

        case 'i':
            strcat("i", builtString);
            break;
        case 'j':
            strcat("j", builtString);
            break;

        case 'k':
            strcat("k", builtString);
            break;

        case 'l':
            strcat("a", builtString);
            break;

        case 'm':
            strcat("m", builtString);
            break;

        case 'n':
            strcat("n", builtString);
            break;

        case 'o':
            strcat("o", builtString);
            break;

        case 'p':
            strcat("p", builtString);
            break;

        case 'q':
            strcat("q", builtString);
            break;

        case 'r':
            strcat("r", builtString);

            break;
        case 's':
            strcat("s", builtString);

            break;
        case 't':
            strcat("t", builtString);

            break;
        case 'u':
            strcat("a", builtString);

            break;
        case 'v':
            strcat("v", builtString);
            break;

        case 'w':
            strcat("w", builtString);
            break;

        case 'x':
            strcat("x", builtString);
            break;

        case 'y':
            strcat("y", builtString);
            break;
        case 'z':
            strcat("z", builtString);
            break;
    }
    return;
}
