#if !defined(SHOW)
#define SHOW


#include<stdio.h>
#include "productos.h"

void mostrarProductos() {
    printf("Productos registrados:\n");
    printf("==============================\n");
    for (int i = 0; i < totalProductos; i++) {
        printf("ID: %d\n", producto[i].id);
        printf("Nombre: %s\n", producto[i].nombre);
        printf("Tipo: %d\n", producto[i].tipo);
        printf("Ubicado en el freezer: %d\n", producto[i].ubicacion);
        printf("Precio: %.2f\n", producto[i].precio);
        printf("Cantidad: %d\n", producto[i].cantidad);
        printf("==============================\n");
    }
    system("pause");
}
#endif // SHOW