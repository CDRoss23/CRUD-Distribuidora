#if !defined(PAY)
#define PAY




#include <stdio.h>
#include <stdlib.h>
#include "productos.h"
#include "guardar.c"

void pagarProducto() {
    char nombre[MAX_NOMBRE];
    int cantidadp;
    float total = 0;
    int encontrado = 0;
    int carritoVacio = 1;

    do {
        printf("Ingrese el nombre del Producto que desea comprar (escriba '0' para finalizar): ");
        scanf(" %[^\n]", &nombre);

        if (strcmp(nombre, "0") != 0) {
            encontrado = 0;

            for (int i = 0; i < totalProductos; i++) {
                if (strcmp(producto[i].nombre, nombre) == 0) {
                    encontrado = 1;

                    printf("Usted seleccionó el producto: %s\n", producto[i].nombre);
                    printf("El precio del producto es: C$%.2f\n", producto[i].precio);

                    printf("Ingrese la cantidad que desea comprar: ");
                    scanf("%d", &cantidadp);

                    if (cantidadp <= 0) {
                        printf("La cantidad ingresada no es valida.\n");
                        break;
                    }

                    if (cantidadp > producto[i].cantidad) {
                        printf("No hay suficiente stock disponible para la cantidad deseada.\n");
                        break;
                    }

                    printf("Desea comprar %d unidades de %s? (S/N): ", cantidadp, producto[i].nombre);
                    char respuesta;
                    scanf(" %c", &respuesta);

                    if (respuesta == 'S' || respuesta == 's') {
                        float subtotal = producto[i].precio * cantidadp;
                        total += subtotal;

                        producto[i].cantidad -= cantidadp;
                        producto[i].cantidadComprada = cantidadp;

                        printf("\x1B[32m");
                        printf("Producto agregado al carrito de compras.\n");
                        printf("\x1b[33m");
                        printf("Subtotal: C$%.2f\n", subtotal);
                        printf("\x1B[37m");

                        carritoVacio = 0;
                    } else {
                        printf("No se realizo la compra del producto.\n");
                    }

                    break;
                }
            }

            if (!encontrado) {
                printf("\x1B[31m");
                printf("Producto no encontrado.\n");
            }
        }
    } while (strcmp(nombre, "0") != 0);

    if (!carritoVacio) {
        printf("\x1B[38;2;255;128;0m");
        printf("\nProductos en el carrito:\n");
        printf("\x1B[37m");
        for (int i = 0; i < totalProductos; i++) {
            if (producto[i].cantidadComprada > 0) {
                printf("\x1B[37m");
                printf("Nombre: %s\n", producto[i].nombre);
                printf("Precio unitario: C$%.2f\n", producto[i].precio);
                printf("Cantidad comprada: %d\n", producto[i].cantidadComprada);
                printf("==============================\n");
            }
        }
        printf("\x1B[32m");
        printf("Total a pagar: C$%.2f\n", total);
        printf("\x1B[37m");
        printf("==============================\n");
    ventas->VentasAcumuladas=ventas->VentasAcumuladas+total;
    } else {
        printf("\x1B[31m");
        printf("No se realizo ninguna compra.\n");
    }

    guardarVentas();
    guardarProductos();
    system("pause");
}


#endif // PAY