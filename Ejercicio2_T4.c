#include <stdio.h>

int main()
{
    int dia, hora, min;
    int conversion;

    printf("Escribe los dias: ");
    scanf("%d", &dia);

    printf("Escribe las horas: ");
    scanf("%d", &hora);

    printf("Escribe los minutos: ");
    scanf("%d", &min);

    conversion = (dia * 86400) + (hora * 3600) + (min * 60);
    printf("Los segundos totales son: %d segundos", conversion);

    return 0;
}
