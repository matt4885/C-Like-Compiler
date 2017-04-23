/* print_symbol_table
 *
 * 
 * --author matthew kempey
 *
 * <param name="id_t *idHead" meaning="id Linked List head">
 * <param name="type_t *typeHead" meaning="type Linked List head">
 * <param name="scope_t *scopeHead" meaning="scope Linked List head">
 *
 * print_symbol_table prints the symbol table for the lexical analyzer.
 * 
 */
#include "../comp.h"
#include "lex.h"


void print_symbol_table(lexum_t *lexumHead, type_t *typeHead, scope_t *scopeHead)
{
    //Define the current head
    lexum_t *current_lexum  = lexumHead;
    type_t  *current_type   = typeHead;
    scope_t *current_scope  = scopeHead;


    //Print format of symbol table
    printf("\n");
    puts("Lexical Analyzer Symbol Table");
    puts("------------------------------");
    puts("ID             |Type    |Scope");
    puts("------------------------------");


    //Iterate through list of lexums..only need to check one list 
    //as they will all have the same number of items inside each list
    //, so we save time skipping the comparison
    while (current_lexum != NULL)
    {
        //Print values
        printf("%s\t\t", current_lexum->lexumValue);
        printf("%s\t ", current_type->typeValue);
        printf("%d\n", current_scope->scopeValue);

        //Iterate to next node in each list
        current_lexum = current_lexum->next;
        current_type  = current_type->next;
        current_scope = current_scope->next;

    } //end while

} //end print_symbol_table
