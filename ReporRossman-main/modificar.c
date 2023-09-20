#if !defined(MODIFICAR)
#define MODIFICAR


#include<stdio.h>
#include "productos.h"
#include "guardar.c"

void modificarProducto() {
    char nombre[MAX_NOMBRE];

    printf("Ingrese el nombre del Producto a modificar: ");
    scanf(" %[^\n]", &nombre);

    for (int i = 0; i < totalProductos; i++) {
        if (strcmp(producto[i].nombre, nombre) == 0) {
            printf("Ingrese el nuevo nombre del Producto: ");
            scanf(" %[^\n]", &producto[i].nombre);

            printf("Ingrese el nuevo tipo del Producto:\n");
            printf("====================================\n");
            printf("1) Lacteo\n");
            printf("2) Carne de Res\n");
            printf("3) Carne de Cerdo\n");
            printf("4) Carne de Pollo\n");
            printf("5) Otros\n");
            printf("====================================\n");
            scanf("%d", &producto[i].tipo);

            printf("Ingrese el nuevo ubicacion del Producto:\n");
            printf("====================================\n");
            printf("1) Freezer 1\n");
            printf("2) Freezer 2\n");
            printf("3) Freezer 3\n");
            printf("4) Freezer 4\n");
            printf("====================================\n");
            scanf("%d", &producto[i].ubicacion);

            printf("Ingrese el nuevo precio del Producto: ");
            scanf("%f", &producto[i].precio);

            printf("Ingrese la nueva cantidad del Producto: ");
            scanf("%d", &producto[i].cantidad);

            printf("\x1B[32m");
            printf("Producto modificado correctamente.\n");
            printf("\x1B[37m");

            guardarProductos();

            system("pause");

            return;
        }
    }
    printf("\x1B[31m");
    printf("Producto no encontrado.\n");
    printf("\x1B[37m");


    system("pause");
}

#endif // MODIFICAR