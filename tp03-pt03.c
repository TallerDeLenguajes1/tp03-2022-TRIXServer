#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50

int main(int argc, char const *argv[])
{
    char * tipoProducto[] = {"Galletas", "Snack", "Cigarrillos", "Caramelos", "Bebidas"};
    
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
    int cantProductos;
    cliente * pCliente[5];
    char * buff;

    buff = (char *) malloc(MAX * sizeof(char));
    
    printf("Ingrese la cantidad de clientes (MAX: 5): ");
    scanf("%d", &cantClientes);
    fflush(stdin);
    
    for (int i = 0; i < cantClientes; i++)
    {
        pCliente[i] = (cliente *) malloc(sizeof(cliente));

        pCliente[i]->clienteID = i;

        printf("Nombre del cliente %d: ", i + 1);
        gets(buff);
        pCliente[i]->nombreCliente = (char *) malloc((strlen(buff) + 1) * sizeof(char));
        strcpy(pCliente[i]->nombreCliente, buff);
        printf("--\n");

        pCliente[i]->cantidadProductosAPedir = 3;

        

    }


    return 0;
}
