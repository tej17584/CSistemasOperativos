#include <stdio.h>

//Menú principal
int main(int argc, char **argv)
{
    printf("hola mundo\n");
    puts("hellow worlnd again \n");
    //Si queremos imprimir con printf, podemos pasarle parámetros, peroooo...hay que tener cuidado con:
    //Tienen que ser diferentes, y se tienen que pasar siempre los parámetros
    printf("There are %d bottles standing on the %s\n ", 20, "wall");
    return 0;
}