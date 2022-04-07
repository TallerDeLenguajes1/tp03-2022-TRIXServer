#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50

char *nombre;
char *buff;

int main(int argc, char const *argv[])
{    
    buff = (char *) malloc(MAX * sizeof(char));
    
    printf("Ingrese un nombre: ");
    gets(buff);

    puts(buff);

    free(buff);

    return 0;
}

