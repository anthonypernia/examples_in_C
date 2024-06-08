#include <stdio.h>

int main()
{
    char name[20];
    printf("Ingrese su nombre: ");
    scanf("%s", name);
    printf("Hola, %s\n", name);
    return 0;
}

// Compile the program
// $ gcc cualquier_cosa.c -o cualquier_cosa

// Run the program
// $ ./cualquier_cosa