#if !defined(SEARCH)
#define SEARCH

#include <stdio.h>
#include <string.h>
#include "productos.h"

void buscarProducto() {
    char nombre[MAX_NOMBRE];
    printf("Voy a buscar un producto de %d registros\n", totalProductos);
    printf("Ingrese el nombre del Producto a buscar: ");
    scanf(" %[^\n]", nombre);

    int encontrado = 0;

    for (int i = 0; i < totalProductos; i++) {
        if (strcmp(producto[i].nombre, nombre) == 0) {
            printf("ID: %d\n", producto[i].id);
            printf("Nombre: %s\n", producto[i].nombre);
            printf("Tipo: %d\n", producto[i].tipo);
            printf("Se ubica en el Freezer: %d\n", producto[i].ubicacion);
            printf("Precio en cordobas: %.2f\n", producto[i].precio);
            printf("Cantidad: %d\n", producto[i].cantidad);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("\x1B[31m");
        printf("Producto no encontrado.\n");
        printf("\x1B[37m");
    }

    system("pause");
}

#endif // SEARCH