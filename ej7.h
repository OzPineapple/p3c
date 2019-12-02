#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float H_PLANK() {
  return 6.6 * pow(10, -34);
}
float K_BOLTZMANN(){
  return 1.3 * pow(10, -23);
}
float C_LIGTH(){
  return 299792458.0;
}
void ejercicio7() {
  printf("\nSeleccione la constante a visulizar\n1.-Constante de Plank\n2.-Constante de Boltzmann\n3.-Velocidad de la luz");
  int op; scanf("%i", &op );
  switch (op) {
    case 1:
      printf("\n%f", H_PLANK() );
    break;
    case 2:
      printf("\n%f", K_BOLTZMANN() );
    break;
    case 3:
      printf("\n%f", C_LIGTH() );
    break;
  }
}
