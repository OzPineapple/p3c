#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void ejercicio4(){
  printf("\nInserte la N: ");
  int N; scanf("%i", &N );
  for (int i = 0; i < N; i++) {
    printf("\ne ^ i %f", 2 * M_PI * i / N );
  }
}
