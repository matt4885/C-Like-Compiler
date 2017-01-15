#include "comp.h"
#include "lex/lex.h"

void start_compile(char* file)
{
    //Open file for reading
    FILE *fp;
    fp = fopen(file, "r");
    
    //Begin lexical analysis
    start_lexical_analysis(fp);

    //Close the file pointer
    fclose(fp);

    return;
}
