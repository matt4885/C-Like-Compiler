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
/* REGION END: Lexical Analyzer Functions */
