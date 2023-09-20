#include<stdio.h>
#include<stdlib.h>
#include "showProd.c"
#include "searchProd.c"
#include "deleteProd.c"
#include "modificar.c"

void menuVentas() {
    int opcion;
   
    do {
        system("cls");
        printf("\n");
        printf("\x1B[47m");
        printf("=== Menu Ventas ===\n");
        printf("\x1B[37m");
        printf("\x1B[40m");
        printf("\n");
        printf("1) Buscar Producto\n");
        printf("2) Mostrar Productos\n");
        printf("3) Pagar\n");
        printf("4) Autorizar Colaborador\n");
        printf("5) Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                buscarProducto();
                break;
            case 2: ;
                 mostrarProductos();
                break;
            case 3:
                pagarProducto();
                break;
            case 4:
                autoriColab();
                break;
            case 5:
                printf("\x1B[31m");
                printf("Saliendo del menu Ventas...\n");
                printf("\x1B[37m");
                break;
            default:
                printf("\x1B[31m");
                printf("Opcion invalida. Intente nuevamente.\n");
                printf("\x1B[37m");
                break;
        }

        printf("\n");
    } while (opcion != 5);
}