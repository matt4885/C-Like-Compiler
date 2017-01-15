/* lex.h
 * Header file for lexical analysis
 * Contains functions and other variables
 *
 * --version: 0.01
 * --author: matthew kempey
 *
 */
#include <stdio.h>
#include <string.h>
/*REGION BEGIN: Variables and Data Structures */

char builtString[128];
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

/*REGION END: Variables and Data Structures */

/* REGION BEGIN: Lexical Analyzer Functions */

void evaluate_char(char currentChar);

void inspect_line();

void start_lexical_analysis(FILE* fp);

char* compare_to_keyword();

void print_symbol_table(lexum_t *lexumHead,
                        type_t *typeHead, scope_t *scopeHead);

/* REGION END: Lexical Analyzer Functions */

