#include "lex.h"
#include <stdlib.h>

/* This probably needs to be refactored and cleaned up. 
   I am consider hashing the string values and then using a switch
   against the integer. This will mean all keywords are now a constant
   hash integer value, and reduce the verbosity when dealing with keywords.
*/

char* compare_to_keyword(char *builtString)
{
    if (strncmp(builtString, "if", 2) == 0) 
    {
        builtString[0] = '\0';
        return "keyword: if\n";
    }
    else if  (strncmp(builtString, "else", 4) == 0)
    { 
        builtString[0] = '\0';
        return "keyword: else\n"; 
    }
    else if  (strncmp(builtString, "return", 6) == 0)
    {
         builtString[0] = '\0';
         return "keyword: return\n"; 
    }
    else if  (strncmp(builtString, "int", 3) == 0) 
    { 
        builtString[0] = '\0';
        return "keyword: int\n";
    }
    else if  (strncmp(builtString, "double", 6) == 0) 
    { 
        builtString[0] = '\0';
        return "keyword: double\n"; 
    }
    else if  (strncmp(builtString, "float", 5) == 0) 
    { 
        builtString[0] = '\0';
        return "keyword: float\n"; 
    }
    else if  (strncmp(builtString, "string", 6) == 0) 
    { 
        builtString[0] = '\0';
        return "keyword: string\n"; 
    }
    else if  (strncmp(builtString, "char", 3) == 0) 
    { 
        builtString[0] = '\0';
        return "keyword: char\n"; 
    }
    else 
    {
        if (strlen(builtString) >= 1) 
        {
            char *returnString = malloc(strlen("id: ") + strlen(builtString) + 2);
            returnString[0] = '\0';
            strcat(returnString, "id: ");
            strcat(returnString, builtString);
            strcat(returnString, "\n");
            return returnString;
        }   
    }
    return "";
}
