#if !defined(DELETE)
#define DELETE


#include <stdio.h>
#include <string.h>
#include "productos.h"
#include "guardar.c"



void eliminarProducto() {
    char nombre[MAX_NOMBRE];

    printf("Ingrese el nombre del Producto a eliminar: ");
    scanf(" %[^\n]", &nombre);

    for (int i = 0; i < totalProductos; i++) {
        if (strcmp(producto[i].nombre, nombre) == 0) {
            for (int j = i; j < totalProductos - 1; j++) {
                producto[j] = producto[j + 1];
            }

            totalProductos--;
            printf("\x1B[32m");
            printf("Producto eliminado correctamente.\n");
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

#endif // DELETE