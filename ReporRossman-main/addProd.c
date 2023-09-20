#if !defined(Agregar)
#define Agregar


#include<stdio.h>
#include "productos.h"
#include "guardar.c"


void agregarProducto() {
    Producto nuevoProducto;
    int nuevoId;
    printf("Ingrese el nombre del Producto: ");
    scanf(" %[^\n]", &nuevoProducto.nombre);
    printf("Ingrese el tipo del Producto:\n");
    printf("====================================\n");
    printf("1) Lacteo\n");
    printf("2) Carne de Res\n");
    printf("3) Carne de Cerdo\n");
    printf("4) Carne de Pollo\n");
    printf("5) Otros\n");
    printf("====================================\n");
    scanf("%d", &nuevoProducto.tipo);

    printf("Ingrese la ubicacion del Producto:\n");
    printf("====================================\n");
    printf("1) Freezer 1\n");
    printf("2) Freezer 2\n");
    printf("3) Freezer 3\n");
    printf("4) Freezer 4\n");
    printf("====================================\n");
    scanf("%d", &nuevoProducto.ubicacion);

    printf("Ingrese el precio del Producto: ");
    scanf("%f", &nuevoProducto.precio);

    printf("Ingrese la cantidad del Producto: ");
    scanf("%d", &nuevoProducto.cantidad);

    nuevoId = totalProductos + 1;

    for (int i = 0; i < totalProductos; i++) {
        if (producto[i].id == nuevoId) {
            nuevoId++;
            i = -1;
        }
    }

    nuevoProducto.id = nuevoId;

    producto[totalProductos] = nuevoProducto;
    totalProductos++;
    printf("\x1B[32m");
    printf("Producto agregado correctamente.\n");
    printf("\x1B[37m");

    guardarProductos();
    guardarVentas();

    system("pause");
}
#endif // Agregar