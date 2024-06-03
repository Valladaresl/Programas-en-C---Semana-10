#include<stdio.h>
int main() {
  float precio_total, descuento, precio_final;
  printf("Ingrese el precio total de la compra: ");
  scanf("%f", &precio_total);
  descuento = precio_total * 0.15;
  precio_final = precio_total - descuento;
  printf("El precio final a pagar es: %.2f\n", precio_final);
  return 0;
}