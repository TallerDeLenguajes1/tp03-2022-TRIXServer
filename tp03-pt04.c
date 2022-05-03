#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50

int main(int argc, char const *argv[])
{    
    char * buff;
    char ** vNombre;

    buff = (char *) malloc(MAX * sizeof(char));
    vNombre = (char **) malloc(5 * sizeof(char *));

    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese un nombre: ");
        gets(buff);
        vNombre[i] = (char *) malloc((strlen(buff) + 1) * sizeof(char));
        strcpy(vNombre[i], buff);

    }

    for (int h = 0; h < 5; h++)
    {
        printf("--\n");
        puts(vNombre[h]);

    }

    printf("--\n");
    
    free(buff);
    for (int j = 0; j < 5; j++)
    {
        free(vNombre[j]);
    }

    return 0;
}