#include <stdio.h>

int main()
{
    float side, area;
    printf("Ingrese el lado del cuadrado: ");
    scanf("%f", &side);
    area = side * side;
    printf("El área del cuadrado es %.2f\n", area);
    return 0;
}

// Compile the program
// $ gcc cualquier_cosa.c -o cualquier_cosa

// Run the program
// $ ./cualquier_cosa