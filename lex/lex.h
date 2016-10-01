/* lex.h
 * Header file for lexical analysis
 * Contains functions and other variables
 *
 * --version: 0.01
 * --author: matthew kempey
 *
 */

/*REGION BEGIN: Variables and Data Structures */

//Linked List Declaration for ID
typedef struct id {
    char* idValue;
    struct id *next;
} id_t;

//Linked List Declaration for Type
typedef struct type{
    char* typeValue;
    struct type *next;
} type_t;

//Linked List Declaration for Scope
typedef struct scope{
    int scopeValue;
    struct scope *next;
} scope_t;

/*REGION END: Variables and Data Structures */

/* REGION BEGIN: Lexical Analyzer Functions */

void print_symbol_table(id_t *idHead, type_t *typeHead, scope_t *scopeHead);

/* REGION END: Lexical Analyzer Functions */
