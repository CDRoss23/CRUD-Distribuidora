#if !defined(GUARDAR)
#define GUARDAR


#include <stdio.h>
#include <stdlib.h>
#include "productos.h"
 

void guardarProductos() {
    FILE* archivo1 = fopen("productos.txt", "w");
    if (archivo1 == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return;
    }

    for (int i = 0; i < totalProductos; i++) {
        fprintf(archivo1, "%d|%s|%d|%d|%.2f|%d\n", producto[i].id, producto[i].nombre, producto[i].tipo, producto[i].ubicacion, producto[i].precio, producto[i].cantidad);
    }

    fclose(archivo1);
}

void guardarVentas() {
    FILE* archivo2 = fopen("ventas.txt", "w");
    if (archivo2 == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return;
    }
        fprintf(archivo2, "|%.2f|", ventas->VentasAcumuladas);
   
        fclose(archivo2);
}

#endif // GUARDAR