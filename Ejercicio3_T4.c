#include <stdio.h>


int main()
{
    int dato;
    int dias, horas, min,  seg;


    printf("Escribe los segundos: ");
    scanf("%d", &dato);

    dias = dato / 86400;
    dato = dato % 86400;

    horas = dato / 3600;
    dato = dato % 3600;

    min = dato / 60;
    dato = dato % 60;

    seg = dato / 60;
    dato = dato % 60;


    printf("Dias: %d\n", dias);
    printf("Horas: %d\n", horas);
    printf("Minutos: %d\n", min);
    printf("Segundos: %d\n", seg);

    return 0;
}
