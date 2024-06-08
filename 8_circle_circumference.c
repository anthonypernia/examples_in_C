#include <stdio.h>


int main()
{
    float radius, circumference;
    printf("Ingrese el radio del círculo: ");
    scanf("%f", &radius);
    //pi = 3.14159
    circumference = 2 * 3.14159 * radius;
    printf("La circunferencia del círculo es %.2f\n", circumference);
    return 0;
}

// Compile the program
// $ gcc cualquier_cosa.c -o cualquier_cosa

// Run the program
// $ ./cualquier_cosa