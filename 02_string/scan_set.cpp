#include <stdio.h>
#include <stdlib.h>

int main (){
    char nombre [16];
    char hexadecimal[16];
    int num;

    printf("Entero: ");
    scanf("%i", &num);
    scanf("%s", nombre);
    printf("[%i] => %s.\n", num, nombre);

     /*Conjunto de seleccion*/
    printf("Hexadecimal: ");
    scanf(" %[ %[0-9a-fA-F]", hexadecimal);
    printf("0x%sh\n", hexadecimal);

     /*Conjunto de seleccion Inverso*/
    scanf(" %[ %[^a-c]", hexadecimal);
    scanf(" %[ %[^\n]", nombre);
    gets(nombre, 16, stdin);

    scanf("%i/%i/%*i", &dia, &mes)
    /*Carácter de asignacion de supresion*/

    return EXIT_SUCCESS;
}
