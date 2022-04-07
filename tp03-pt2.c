#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50


int main(int argc, char const *argv[])
{    
    char *nombre;
    char *buff;
    char *vNombre[5];

    buff = (char *) malloc(MAX * sizeof(char));

    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese un nombre: ");
        gets(buff);
        vNombre[i] = (char *) malloc((strlen(buff) + 1) * sizeof(char));
        strcpy(vNombre[i], buff);
        printf("--\n");
        puts(vNombre[i]);

    }

    free(buff);
    free(nombre);
    for (int j = 0; j < 5; j++)
    {
        free(vNombre[j]);
    }

    return 0;
}

