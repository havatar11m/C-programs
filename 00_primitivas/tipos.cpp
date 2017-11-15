
#include <stdio.h>
#include <stdlib.h>

#define ROJO "\x1B[31m"
#define NORMAL "\x1B[39m"

int main (){
    int entero= 34;
    float realillo = 35.7 ;
    double real = 35.7 ;

    long int entero_largo = 93;
    unsigned positivo = 5;

    unsigned char byte = 97;

    system("toilet --gay -fpagga datos");

    printf("%i (%lu \n", byte, sizeof (char));

    printf("%i (%lu bytes)\n", entero, sizeof(int));
    printf("%li (%lu bytes)\n", entero_largo, sizeof (int));
    printf("%f (%lu bytes)\n", realillo, sizeof(float));
    printf("%lf (%lu bytes)\n", real, sizeof(double));
    printf("%u (%lu bytes)\n", positivo, sizeof (int));

    printf("%c%c%c", 49, 50, 10);
    printf("%c%c%c", 0x31, 0x32, 0xA);
    printf("%c%c%c", '1', '2', '\n');
    printf(ROJO "12" NORMAL);
  
    return EXIT_SUCCESS;
}
