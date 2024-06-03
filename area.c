#include<stdio.h>
int main() {
  float base, altura, area, perimetro;
  printf("Ingrese la base del rectángulo: ");
  scanf("%f", &base);
  printf("Ingrese la altura del rectángulo: ");
  scanf("%f", &altura);
  area = base * altura;
  perimetro = 2 * (base + altura);
  printf("El área del rectángulo es: %.2f\n", area);
  printf("El perímetro del rectángulo es: %.2f\n", perimetro);
  return 0;
}