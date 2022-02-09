#include <stdio.h>
int main()
{
    float precio;
    float descuento, total;

    printf("Ingrese el precio del producto: ");
    scanf("%f", &precio);

    printf("Ingrese el descuento a aplicar: ");
    scanf("%f", &descuento);

    total = precio * descuento;
    printf("El precio total es: %.2f", total);

    return 0;
}
