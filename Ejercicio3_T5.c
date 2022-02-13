#include <stdio.h>

int main()
{
  int lado1, lado2, lado3;

  printf("Ingresa el valor del primer lado: ");
  scanf("%d", &lado1);
  printf("Ingresa el valor del segundo lado: ");
  scanf("%d", &lado2);
  printf("Ingresa el valor del tercer lado: ");
  scanf("%d", &lado3);

  if(lado1 == lado2 && lado1== lado3)
    printf("El triangulo es Equilatero");
  else if (lado1==lado2 && lado1!=lado3 && lado2!=lado3)
  printf("El triangulo es Isosceles");
  else if(lado1!=lado2 && lado1!=lado2 && lado2!=lado3)
    printf("El triangulo es Escaleno");
  return 0;
  }