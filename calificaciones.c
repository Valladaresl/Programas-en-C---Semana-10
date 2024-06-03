#include<stdio.h>
int main(void) 
{
  float parcial1, parcial2, parcial3, examenFinal, trabajoFinal, promedioParciales, calificacionFinal;
  printf("Ingresa la nota del primer parcial: ");
  scanf("%f", &parcial1);
  printf("Ingresa la nota del segundo parcial: ");
  scanf("%f", &parcial2);
  printf("Ingresa la nota del tercer parcial: ");
  scanf("%f", &parcial3);
  printf("Ingresa la nota del examen final: ");
  scanf("%f", &examenFinal);
  printf("Ingresa la nota del trabajo final: ");
  scanf("%f", &trabajoFinal);
  promedioParciales = (parcial1 + parcial2 + parcial3) / 3;
  calificacionFinal = (promedioParciales * 0.55) + (examenFinal * 0.30) + (trabajoFinal * 0.15);
  printf("La calificación final es: %.2f\n", calificacionFinal);
  return 0;
}