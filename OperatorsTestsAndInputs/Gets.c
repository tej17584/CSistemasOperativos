#include <stdio.h>
int main(int argc, char const *argv[])
{
    //Tenemos que declarar un char
    char agestring[100];
    //deaclaramos un tipo de variable donde guardarlo

    int age;
    int bonus;

    //para poder obtener inputs de las cosas
    //usamos gets
    printf("Ingresa tu edad por favor: ");
    gets(agestring);
    printf("\n");
    printf("La edad que ingresaste es: ");
    puts(agestring);
    return 0;
}
