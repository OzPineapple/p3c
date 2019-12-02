#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void ejercicio0(){
  int num10 = 0;
  int size = 0;
  printf("\nConvertir de base 10 a base 20\nInserte el numero a convertir: ");
  scanf("%i", &num10 );
  int num10Clone = num10;
  while (num10Clone != 0) {
    num10Clone = num10Clone / 20;
    size++;
  }
  int arr2[size];
  for (int i = 0; i < size ; i++) {arr2[i] = num10 % 20; num10 /= 20;}
  printf("\nEl numero base 20 es: ");
  for (int i = size - 1 ; i >= 0; i--) printf("%i ", arr2[i] );
  printf("\nNotación Maya:\n");
  for (int i = size - 1 ; i >= 0; i--){
    for (int j = 0; j < arr2[i] % 5; j++) printf(" * ");
    for (int j = 0; j < arr2[i] / 5; j++) printf("\n------------");
    printf("\n\n");
  }
  printf("\nConvertir de base 20 a base 10\nInserte la longitud del numero a convertir: ");
  scanf("%i", &size );
  int arr[size];
  for (int i = 0; i < size; i++) arr[i] = 0;
  printf("\nInserte los digitos del numero:\n");
  for(int i = size - 1; i >= 0 ; i--){
    printf("\r");
    for (int j = size - 1; j >=0; j--) printf((j==i)? "[ ? ]" : (j<i)? "[ ]" : "[%i]", arr[j]);
    printf(": ");
    scanf("%i", &arr[i] );
  }
  printf("\nEl numero base 20 es: ");
  for(int i = size - 1; i >= 0; i-- ) printf("%i", arr[i] );
  num10 = 0;
  for (int i = 0; i < size; i++) {
    num10+= arr[i] * pow(20, i);
  }
  printf("\nEl numero en base 10 es: %i", num10);
}
