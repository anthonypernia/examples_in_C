#include <stdio.h>

int main()
{
    float side, perimeter;
    printf("Ingrese la longitud del lado del cuadrado: ");
    scanf("%f", &side);
    perimeter = 4 * side;
    printf("El perímetro del cuadrado es %.2f\n", perimeter);
    return 0;
}

// Compile the program
// $ gcc cualquier_cosa.c -o cualquier_cosa

// Run the program
// $ ./cualquier_cosa