#include <stdio.h>

int main()
{
    float base, height, area;
    printf("Ingrese la base del triángulo: ");
    scanf("%f", &base);
    printf("Ingrese la altura del triángulo: ");
    scanf("%f", &height);
    area = 0.5 * base * height;
    printf("El área del triángulo es %.2f\n", area);
    return 0;
}

// Compile the program
// $ gcc cualquier_cosa.c -o cualquier_cosa

// Run the program
// $ ./cualquier_cosa