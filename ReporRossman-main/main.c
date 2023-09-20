#include <stdio.h>
#include <string.h>
#include "menuAlma.c"
#include "menuVentas.c"
#include "menuGerente.c"
#include "cargar.c"

#define CONTRASENA_VENTAS "ventas1"
#define CONTRASENA_ALMACEN "alamacen2"
#define CONTRASENA_GERENTE "gerente3"

void autoriColab(){
    char contrasena [8];
    int rol;

    system("cls");
    printf("\t=========================\n");
    printf("\x1B[43m");
    printf("\tCOLABORADORES AUTORIZADOS\n");
    printf("\x1B[40m");
    printf("\t=========================\n");
    printf("\n\n");
    printf("1) Ejecutivo de ventas\n");
    printf("2) Personal de almacen\n");
    printf("3) Gerente\n");
    printf("4) Salir del programa\n");

    printf("Indique su cargo: ");
    scanf("%d", &rol);

switch (rol) {
        case 1:
        do
        {
            system("cls");
            printf("\n");
            printf("\x1B[42m");
            printf ("\tBienvenido\n");
            printf("\x1B[40m");
            printf("\n\n");
            printf ("Ingrese su codigo:\n");
            scanf (" %[^\n]", contrasena);
        } while (strcmp(contrasena, CONTRASENA_VENTAS) != 0);
        
        system("pause");
            if (strcmp(contrasena, CONTRASENA_VENTAS) == 0)
            {
            menuVentas();
            }

            return 1;
            break;
        case 2:
        do
        {
            system("cls");
            printf("\n");
            printf("\x1B[42m");
            printf ("\tBienvenido\n");
            printf("\x1B[40m");
            printf("\n\n");
            printf ("Ingrese su codigo:\n");
            scanf (" %[^\n]", contrasena);
        } while (strcmp(contrasena, CONTRASENA_ALMACEN) != 0);
    
            system("pause");
            if (strcmp(contrasena, CONTRASENA_ALMACEN) == 0)
            {
            menuAlmacen();
            } 
            return 0;
            break;
        case 3:
        do
        {
            system("cls");
            printf("\n");
            printf("\x1B[42m");
            printf ("Bienvenido\n");
            printf("\x1B[40m");
            printf("\n\n");
            printf ("Ingrese su codigo:\n");
            scanf (" %[^\n]", contrasena);
        } while (strcmp(contrasena, CONTRASENA_GERENTE) != 0);
        
            system("pause");
            if (strcmp(contrasena, CONTRASENA_GERENTE) == 0)
            {
            menuGerente();
            } 
            return 0;
            break;
        default:
            printf("Gracias por preferirnos. Saliendo del programa...\n");
            return 0;
    }

}

int main() {

    cargarProductos();
    cargarVentas();

    autoriColab();


    return  0;
}