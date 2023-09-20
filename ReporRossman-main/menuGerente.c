#include<stdio.h>
#include<stdlib.h>
#include "addProd.c"
#include "showProd.c"
#include "searchProd.c"
#include "deleteProd.c"
#include "modificar.c"
#include "payProd.c"
#include "ventas.c"

void menuGerente() {
    int opcion;

    do {
        system("cls");
        printf("\n");
        printf("\x1B[47m");
        printf("=== Menu Gerente ===\n");
        printf("\x1B[37m");
        printf("\x1B[40m");
        printf("\n");
        printf("1) Agregar Producto\n");
        printf("2) Buscar Producto\n");
        printf("3) Pagar\n");
        printf("4) Modificar Producto\n");
        printf("5) Eliminar Producto\n");
        printf("6) Mostrar Productos\n");
        printf("7) Mostrar Ventas\n");
        printf("8) Autorizar Colaborador\n");
        printf("9) Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                agregarProducto();
                break;
            case 2:
                buscarProducto();
                break;
            case 3:
                pagarProducto();
                break;
            case 4:
                modificarProducto();
                break;
            case 5:
                eliminarProducto();
                break;
            case 6: ;
                mostrarProductos();
                break;
            case 7:
                mostrarVentasAcumuladas();
                break;
            case 8:
                autoriColab();
                break;
            case 9:
                printf("\x1B[33m");
                printf("Saliendo del menu Gerente...\n");
                printf("\x1B[37m");
                break;
            default:
                printf("\x1B[31m");
                printf("Opcion invalida. Intente nuevamente.\n");
                printf("\x1B[37m");
                break;
        }

        printf("\n");
    } while (opcion != 9);
}