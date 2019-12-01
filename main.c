#include <stdio.h>
#include "ej0.h"
#include "ej3.h"

int main(){
    printf("\nBienvenido a la lista de ejercicios programados, por favor inserte un número para seleccionar un ejercio del 0-29: ");
    int opcion;
    scanf("%i", &opcion);
    switch (opcion){
      case 0:
        ejercicio0();
      break;
      case 3:
        ejercio3();
      break;
      default:
        printf("\nNo se seleccionó algún ejercicio");
      break;
    }
    printf("\nGracias por ver. ATT Oziel\n");
    return 0;
}
