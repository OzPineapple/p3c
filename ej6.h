#include <stdio.h>
#include <stdlib.h>
void ejercicio6() {
  int size = 0, base = 0;
  printf("\nConvertir de base N a base 10\nInserte la Base de origen: ");
  scanf("%i", &base );
  printf("\nInserte la longitud del numero a convertir: ");
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
  printf("\nEl numero base %i es: ", base);
  for(int i = size - 1; i >= 0; i-- ) printf("%i", arr[i] );
  int num10 = 0;
  for (int i = 0; i < size; i++) {
    num10+= arr[i] * pow(base, i);
  }
  printf("\nConvertir de base 10 a base 20\nInserte la Base destino: ");
  int base2;
  scanf("%i", &base2 );
  int num10Clone = num10;
  while (num10Clone != 0) {
    num10Clone = num10Clone / base2;
    size++;
  }
  int arr2[size];
  for (int i = 0; i < size ; i++) {arr2[i] = num10 % base2; num10 /= base2;}
  printf("\nEl numero base %i es: ", base2);
  for (int i = size - 1 ; i >= 0; i--) printf("%i ", arr2[i] );
}
