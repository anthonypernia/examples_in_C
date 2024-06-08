#include <stdio.h>

int main()
{
    float weight, height, imc;
    printf("Ingrese su peso en kilogramos: ");
    scanf("%f", &weight);


    printf("Ingrese su altura en metros: ");
    scanf("%f", &height);


    imc = weight / (height * height);


    printf("Su IMC es: %.2f\n", imc);

    return 0;
}

// Compile the program
// $ gcc cualquier_cosa.c -o cualquier_cosa

// Run the program
// $ ./cualquier_cosa