#include <stdio.h>

int main ()
{
   float hora;

    printf("Dame una hora (Formato 24 hrs): ");
    scanf("%f", &hora);

    if (hora >= 0.00 && hora <= 11.59)
        printf("Buenos Dias!");
   else if (hora >= 12.00 && hora <= 17.59)
        printf("Buenas Tardes!");
    else if (hora >= 18.00 && hora <= 23.59)
       printf("Buenas Noches");

    else
        printf("La hora no es valida");
    return 0;
}
