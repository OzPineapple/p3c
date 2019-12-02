#include <stdio.h>
#include <stdlib.h>
void ejercicio5() {
  int size = 0;
  printf("\nConvertir de base 2 a base 10\nInserte la longitud del numero a convertir: ");
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
  printf("\nEl numero base 2 es: ");
  for(int i = size - 1; i >= 0; i-- ) printf("%i", arr[i] );
  int num10 = 0;
  for (int i = 0; i < size; i++) {
    num10+= arr[i] * pow(2, i);
  }
  printf("\nEl numero en base 10 es: %i", num10);
}
