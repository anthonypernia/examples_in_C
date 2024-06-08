#include <stdio.h>


int main()
{
    int seconds;
    printf("Ingrese el tiempo en segundos: ");
    scanf("%d", &seconds);
    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;
    int remaining_seconds = (seconds % 3600) % 60;
    printf("%d segundos son %d horas, %d minutos y %d segundos\n", seconds, hours, minutes, remaining_seconds);
    return 0;
}

// Compile the program
// $ gcc cualquier_cosa.c -o cualquier_cosa

// Run the program
// $ ./cualquier_cosa