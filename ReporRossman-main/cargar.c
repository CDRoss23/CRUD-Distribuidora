#if !defined(CARGAR)
#define CARGAR

#include <stdio.h>
#include "productos.h"

void cargarProductos() {
    FILE* archivo = fopen("productos.txt", "r");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return;
    }

    totalProductos = 0;

    while (fscanf(archivo, "%d|%[^|]|%d|%f|%d\n", &producto[totalProductos].id, producto[totalProductos].nombre, &producto[totalProductos].ubicacion, &producto[totalProductos].precio, &producto[totalProductos].cantidad) == 5) {
        totalProductos++;
    }


    fclose(archivo);
}

void cargarVentas() {
    FILE* archivo = fopen("ventas.txt", "r");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return;
    }

    totalVentas = 0;

    while (fscanf(archivo, "%f|", &ventas[totalVentas].VentasAcumuladas) == 1) {
    totalVentas++;

    }

    fclose(archivo);
}
#endif // CARGAR