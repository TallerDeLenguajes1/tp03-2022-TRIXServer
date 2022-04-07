#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50

int main(int argc, char const *argv[])
{
    char *tipoProducto[] = {"Galletas", "Snack", "Cigarrillos", "Caramelos", "Bebidas"};
    
    struct producto
    {
        int productoID;
        int cantidad;
        char * tipoProducto;
        float precioUnitario;
    } typedef producto;

    struct cliente
    {
        int clienteID;
        char * nombreCliente;
        int cantidadProductosAPedir;
        producto * productos; 
    } typedef cliente;
    
    int cantClientes;
    cliente * pCliente;

    printf("Ingrese la cantidad de clientes (MAX: 5): ");
    scanf("%d", &cantClientes);
    
    for (int i = 0; i < cantClientes; i++)
    {
        printf("--\n");

    }


    return 0;
}
