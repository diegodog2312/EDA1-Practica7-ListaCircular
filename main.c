#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "clist.h"

//MENU
int main() {
    int op = 0;
    int dato;
    int posicion;
    int *n;
    int i;
    clist *l = create_list();
     
    printf("Elija una opcion: \n");
    printf("1) Añadir\n");
    printf("2) Eliminar (por dato)\n");
    printf("3) Eliminar (por posicion)\n");
    printf("4) Buscar (por dato)\n");
    printf("5) Buscar (por posicion)\n");
    printf("6) Buscar (encuentra el nodo)\n");
    printf("7) Imprimir\n");
    printf("8) Salir\n");
            
    while (op!=8){
        printf("\n¿Que desea hacer?: ");
        scanf("%i", &op);
        switch(op){
            case 1:
                printf("\n¿Que dato desea agregar?: ");
                scanf("%i",&dato);
                printf("\n¿En que posicion?: ");
                scanf("%i",&posicion);
                add(l,dato,posicion);
            break;
            case 2:
                printf("\n¿Que dato desea eliminar?: ");
                scanf("%i",&dato);
                remove_data(l,dato);
                printf("Se elimino: %i",dato);
            break;                
            case 3:
                printf("\n¿Que posicion desea eliminar?: ");
                scanf("%i",&posicion);
                i = delete_data(l,posicion);
                printf("Se elimino: %i",i);
            break;
            case 4:
                printf("\n¿Que dato desea buscar?: ");
                scanf("%i",&dato);
                i = search_data(l,dato);
                printf("Se encontro en: %i",i);
            break;
            case 5:
                printf("\n¿Que posicion desea buscar?: ");
                scanf("%i",&posicion);
                i = search_pos(l,posicion);
                printf("Se encontro: %i",i);
            break;
            case 6: 
                printf("\n¿Que dato desea buscar?: ");
                scanf("%i",&dato);
                n = search_node(l,dato);
                printf("Se encontro en el nodo: %p",n);
            break;
            case 7:
                print_list(l);
            break;
            case 8:
                printf("\nHasta pronto");
                delete_list(l);              
            break;
            default:    
                printf("Error, vuelva a ingresar");
        }
    }
    return (EXIT_SUCCESS);
}

