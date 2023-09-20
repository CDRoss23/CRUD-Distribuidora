#if !defined(VENTAS)
#define VENTAS

#include <stdio.h>
#include "productos.h"

void mostrarVentasAcumuladas(){
        printf("\x1B[32m");
        printf("==============================\n");
        printf("El total de ventas acumuladas es de: %.2fC$\n", ventas->VentasAcumuladas);
        printf("==============================\n");
        printf("\x1B[37m");
    system("pause");
}

#endif // VENTAS