#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50

char * tiposProductos[] = {"Galletas", "Snack", "Cigarrillos", "Caramelos", "Bebidas"};

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

void cargarClientes(cliente *, int);

int main(int argc, char const *argv[])
{
    int cantClientes;
    cliente * pClientes;
    char * buff;

    buff = (char *) malloc(MAX * sizeof(char));
    
    system("cls || clear");

    printf("Ingrese la cantidad de clientes (MAX: 5): ");
    scanf("%d", &cantClientes);
    fflush(stdin);

    pClientes = (cliente *) malloc(cantClientes * sizeof(cliente));
    cargarClientes(pClientes, cantClientes);

    return 0;
}

void cargarClientes(cliente * pClientes, int cantClientes)
{
    int auxTipo;
    char * buff;
    buff = (char *) malloc(MAX * sizeof(char));
        
    for (int i = 0; i < cantClientes; i++)
    {
        printf("Datos del cliente\t%d de %d\n", i + 1, cantClientes);
        printf("--\n");
        pClientes[i].clienteID = i;

        printf("Nombre del cliente: ");
        gets(buff);
        pClientes[i].nombreCliente = (char *) malloc((strlen(buff) + 1) * sizeof(char));
        strcpy(pClientes[i].nombreCliente, buff);
        printf("--\n");

        pClientes[i].cantidadProductosAPedir = 1 + rand( ) % 9;

        pClientes[i].productos = (producto *) malloc(pClientes[i].cantidadProductosAPedir * sizeof(producto));

        for (int j = 0; j < pClientes[i].cantidadProductosAPedir; j++)
        {
            printf("Producto a pedir \t%d de %d\n", j + 1, pClientes[i].cantidadProductosAPedir);
            
            pClientes[i].productos[j].productoID = j;

            printf("Ingrese la cantidad: ");
            scanf("%d", &pClientes[i].productos[j].cantidad);
            printf("--\n");

            printf("Ingrese el tipo 0: Galletas - 1: Snack - 2: Cigarrillos - 3: Caramelos - 4: Bebidas: ");
            scanf("%d", &auxTipo);
            pClientes[i].productos[j].tipoProducto = tiposProductos[auxTipo];
            printf("--\n");

            printf("Ingrese el precio unitario: ");
            scanf("%f", &pClientes[i].productos[j].precioUnitario);
            printf("--\n");

        }
        printf("--\n");
        fflush(stdin);

    }
}
