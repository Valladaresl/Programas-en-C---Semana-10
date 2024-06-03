#include<stdio.h>
int main() {
  float salario_anterior, incremento, nuevo_salario;
  printf("Ingrese el salario anterior del obrero: ");
  scanf("%f", &salario_anterior);
  incremento = salario_anterior * 0.25;
  nuevo_salario = salario_anterior + incremento;
  printf("El nuevo salario del obrero es: %.2f\n", nuevo_salario);
  return 0;
}