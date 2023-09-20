#if !defined(PRODUCTOS_H)
#define PRODUCTOS_H

#define MAX_NOMBRE 50
typedef struct{
    int id;
    char nombre[MAX_NOMBRE];
    int tipo;
    int ubicacion;
    float precio;
    int cantidad;
    int cantidadComprada;
}Producto;

typedef struct {
    float VentasAcumuladas;
}Ventas;

Producto producto[1000];
int totalProductos;

Ventas ventas[1000];
int totalVentas;


#endif // PRODUCTOS_H


