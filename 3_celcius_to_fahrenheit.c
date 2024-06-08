#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    // Input temperature in celsius
    printf("Ingrese la temperatura en grados Celsius: ");
    scanf("%f", &celsius);

    // celsius to fahrenheit conversion formula
    fahrenheit = (celsius * 9 / 5) + 32;

    // Print the result
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
// Compile the program
// $ gcc cualquier_cosa.c -o cualquier_cosa

// Run the program
// $ ./cualquier_cosa