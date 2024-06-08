#include <stdio.h>

int main()
{
    int num1;
    printf("\nIngrese el primer número: ");
    scanf("%d", &num1);
    //input second number
    int num2;
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);
    //selecting the operation
    int operation;
    printf("Seleccione la operación que desea realizar:\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicación\n");
    printf("4. División\n");
    scanf("%d", &operation);
    //switch case for the operation
    switch (operation)
    {
    case 1:
        printf("La suma de %d y %d es %d\n", num1, num2, num1 + num2);
        break;
    case 2:
        printf("La resta de %d y %d es %d\n", num1, num2, num1 - num2);
        break;
    case 3:
        printf("La multiplicación de %d y %d es %d\n", num1, num2, num1 * num2);
        break;
    case 4:
        printf("La división de %d y %d es %.2f\n", num1, num2, (float)num1 / num2);
        break;
    default:
        printf("Operación no válida\n");
    }
    return 0;
}

// Compile the program
// $ gcc cualquier_cosa.c -o cualquier_cosa

// Run the program
// $ ./cualquier_cosa