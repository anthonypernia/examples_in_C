#include <stdio.h>

int main()
{
    float side1, side2, side3;
    printf("Ingrese la longitud del lado 1: ");
    scanf("%f", &side1);
    printf("Ingrese la longitud del lado 2: ");
    scanf("%f", &side2);
    printf("Ingrese la longitud del lado 3: ");
    scanf("%f", &side3);
    printf("El perímetro del triángulo es %.2f\n", side1 + side2 + side3);
    return 0;
}


// Compile the program
// $ gcc cualquier_cosa.c -o cualquier_cosa

// Run the program
// $ ./cualquier_cosa