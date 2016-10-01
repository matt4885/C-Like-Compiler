/* print_symbol_table
 *
 * --version 0.01
 * --author matthew kempey
 *
 * <param name="id_t *idHead" meaning="id Linked List head">
 * <param name="type_t *typeHead" meaning="type Linked List head">
 * <param name="scope_t *scopeHead" meaning="scope Linked List head">
 *
 * print_symbol_table prints the symbol table for the lexical analyzer.
 * 
 */

#include "lex.h"

void print_symbol_table(id_t *idHead, type_t *typeHead, scope_t *scopeHead)
{
    //Define the current head
    id_t    *current_id    = head;
    type_t  *current_type  = head;
    scope_t *current_scope = head;


    //Print format of symbol table
    puts("Lexical Analyzer Symbol Table");
    puts("----------------------------------");
    puts("ID               |Type    | Scope ");
    puts("----------------------------------");

    while (current != NULL)
    {
        //Print values
        printf("[");
        printf("%s\t\t", current_id->value);
        printf("%s\t\t", current_type->value);
        printf("%d", current_scope);

        printf("]\n");
        //Iterate to next node in each list
        current = current_id->next;

    } //end while

} //end print_symbol_table
