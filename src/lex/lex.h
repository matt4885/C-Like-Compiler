/* lex.h
 * Header file for lexical analysis
 * Contains functions and other variables
 *
 * 
 * --author: matthew kempey
 *
 */
#include <stdio.h>
#include <string.h>

/*REGION BEGIN: Variables and Data Structures */

//builtString (current lexum being built)[]
char builtString[128];
char builtNumber[128];



//Linked List Declaration for ID
typedef struct lexum
{
    char *lexumValue;
    struct lexum *next;
} lexum_t;

//Linked List Declaration for Type
typedef struct type
{
    char *typeValue;
    struct type *next;
} type_t;

//Linked List Declaration for Scope
typedef struct scope
{
    int scopeValue;
    struct scope *next;
} scope_t; 

lexum_t lexum;
type_t type;
scope_t scope;

/*REGION END: Variables and Data Structures */

/* REGION BEGIN: Lexical Analyzer Functions */

void evaluate_char(char currentChar);

void inspect_line();

void start_lexical_analysis(FILE* fp);

char* compare_to_keyword();

void print_symbol_table(lexum_t *lexumHead,
                        type_t *typeHead, scope_t *scopeHead);

void add_symbol(char *symbol);
/* REGION END: Lexical Analyzer Functions */

