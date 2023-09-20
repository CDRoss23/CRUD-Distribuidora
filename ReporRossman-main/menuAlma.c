#include<stdio.h>
#include<stdlib.h>
#include "addProd.c"
#include "showProd.c"
#include "searchProd.c"
#include "deleteProd.c"
#include "modificar.c"


void menuAlmacen() {
    int opcion;

    do {
        system("cls");
        printf("\n");
        printf("\x1B[47m");
        printf("\x1B[30m");
        printf("=== Menu Almacaen ===\n");
        printf("\x1B[37m");
        printf("\x1B[40m");
        printf("\n");
        printf("1) Agregar Producto\n");
        printf("2) Buscar Producto\n");
        printf("3) Modificar Producto\n");
        printf("4) Eliminar Producto\n");
        printf("5) Mostrar Productos\n");
        printf("6) Autorizar Colaborador\n");
        printf("7) Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                agregarProducto();
                break;
            case 2:
                buscarProducto();
                break;
            case 3:
                modificarProducto();
                break;
            case 4:
                eliminarProducto();
                break;
            case 5: ;
                mostrarProductos();
                break;
            case 6: ;
                autoriColab();
                break;
            case 7:

                printf("\x1B[31m");
                printf("Saliendo del menu Almacen...\n");
                printf("\x1B[37m");
                break;
            default:
                printf("\x1B[31m");
                printf("Opcion invalida. Intente nuevamente.\n");
                printf("\x1B[37m");
                break;
        }

        printf("\n");
    } while (opcion != 7);
}
