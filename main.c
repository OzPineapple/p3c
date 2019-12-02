#include <stdio.h>
#include "ej0.h"
#include "ej1.h"
#include "ej2.h"
#include "ej3.h"
#include "ej4.h"
#include "ej5.h"
#include "ej6.h"
#include "ej7.h"
#include "ej8.h"
#include "ej9.h"

int main(){
    printf("\nBienvenido a la lista de ejercicios programados, por favor inserte un número para seleccionar un ejercio del 0-29: ");
    int opcion;
    scanf("%i", &opcion);
    switch (opcion){
      case 0:
        ejercicio0();
      break;
      case 1:
        ejercicio1();
      break;
      case 2:
        ejercicio2();
      break;
      case 3:
        ejercicio3();
      break;
      case 4:
        ejercicio4();
      break;
      case 5:
        ejercicio5();
      break;
      case 6:
        ejercicio6();
      break;
      case 7:
        ejercicio7();
      break;
      case 8:
        ejercicio8();
      break;
      case 9:
        ejercicio9();
      break;
      default:
        printf("\nNo se seleccionó algún ejercicio");
      break;
    }
    printf("\nGracias por ver. ATT Oziel\n");
    return 0;
}
