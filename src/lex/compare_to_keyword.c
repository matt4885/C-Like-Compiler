#include "lex.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/* This probably needs to be refactored and cleaned up. 
   I am consider hashing the string values and then using a switch
   against the integer. This will mean all keywords are now a constant
   hash integer value, and reduce the verbosity when dealing with keywords.
*/

char* compare_to_keyword(char *builtString)
{
    if (strncmp(builtString, "if", 2) == 0) { 
        memset(&builtString[0], 0, sizeof(builtString));
        return "keyword: if\n";
    }
    else if  (strncmp(builtString, "else", 4) == 0) { 
        memset(&builtString[0], 0, sizeof(builtString));
        return "keyword: else\n"; 
    }
    else if  (strncmp(builtString, "return", 6) == 0) {
         memset(&builtString[0], 0, sizeof(builtString));
         return "keyword: return\n"; 
    }
    else if  (strncmp(builtString, "int", 3) == 0) { 
        memset(&builtString[0], 0, sizeof(builtString));
        return "keyword: int\n";
    }
    else if  (strncmp(builtString, "double", 6) == 0) { 
        memset(&builtString[0], 0, sizeof(builtString));
        return "keyword: int\n"; 
    }
    else if  (strncmp(builtString, "float", 5) == 0) { 
        memset(&builtString[0], 0, sizeof(builtString));
        return "keyword: int\n"; 
    }
    else if  (strncmp(builtString, "string", 6) == 0) { 
        memset(&builtString[0], 0, sizeof(builtString));
        return "keyword: int\n"; 
    }
    else if  (strncmp(builtString, "int", 3) == 0) { 
        memset(&builtString[0], 0, sizeof(builtString));
        return "keyword: int\n"; 
    }
    else if  (strncmp(builtString, "char", 3) == 0) { 
        memset(&builtString[0], 0, sizeof(builtString));
        return"keyword: int\n"; 
    }
    else {
        char *tempStr = malloc(sizeof(builtString));
        strcat(tempStr, builtString);

        if ((strlen(tempStr) == 2) && (strcmp(tempStr, "") == 0))
            return tempStr;
        else
            strcat(tempStr, "id: ");

        strcat(tempStr, "\n");
        memset(&builtString[0], 0, sizeof(builtString));
        return tempStr;
    }
}
