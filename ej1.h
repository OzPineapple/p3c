#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void ejercicio1() {
  float q=0;
  float r=0;
  float v=0;
  printf("\n¿q?: ");
  scanf("%f", &q );
  printf("\n¿r?: ");
  scanf("%f", &r );
  printf("\n¿v?: ");
  scanf("%f", &v );
  float f = (9 * pow(10, 9)  * q) / (r * r);
  printf("\nE = kq / r^2 = %f", f );
  printf("\nFlujo_E = q / e_o  = %f",( q /( 8.8 * pow(10, -12) ) ) );
  printf("\nB = F / (q*v) = %f", f / (q*v) );
}
