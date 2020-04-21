#include "node.h"
#include <stdlib.h>
#include <stdio.h>

//Funcion para crear un nodo
node *create_node(DATA data){
    node *t;
    t = (node*)malloc(sizeof(node));
    t -> next = NULL;
    t -> data = data;
    return t;
} 

//Funcion para eliminar un nodo
void delete_node(node *n){
    if(n->next == NULL){
        free(n);
        n = NULL;
    }
}

