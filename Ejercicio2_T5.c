#include <stdio.h>
#define INT_COSTO 20

int main()
{
    float kilos;
    float precio;

    printf("Ingresa la cantidad de kilos: ");
    scanf("%f", &kilos);

    if (kilos >= 0 && kilos <= 2)
        precio = (kilos * INT_COSTO);
    else if (kilos >=2.01&& kilos<= 5)
        precio = (kilos * INT_COSTO)*.10;
    else if (kilos>= 5.01 && kilos<= 10)
        precio = (kilos * INT_COSTO)*.15;
    else if(kilos>=10.01)
        precio = (kilos * INT_COSTO)*.20;

    printf("El precio total es: %.2f",precio);

    return 0;


}