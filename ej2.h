#include <stdio.h>
#include <stdlib.h>
void ejercicio2() {
  printf("\nSeleccione texto\n1.- Teorema fundamental de la aritmetica\n2.-Teorema fundamnetal del algebra\n3.-Ecuaciones diofantinas\n4.-Importancia\n¿Opcion?: ");
  int opcion;
  scanf("%i", &opcion);
  switch (opcion) {
    case 1:
      printf("\nTodo entero positivo mayor que 1 es un numero primo o bien un unico producto de numeros primos");
    break;
    case 2:
      printf("\nTodo polinomio de grado mayor que cero tiene una raiz.1​ El dominio de la variable es el conjunto de los numeros complejos, que es una extensión2​ de los numeros reales");
    break;
    case 3:
      printf("\nCualquier ecuacion algebraica, de dos o mas incognitas, cuyos coeficientes recorren el conjunto de los numeros enteros, de las que se busacan soluciones enteras");
    case 4:
      printf("\nDado que el TF de la aritmetica nos dice que el producto de dos numeros enteros nos dara un numero entero esto nos permite buscar soluciones a partir de multiples soluciones enteras. Y el TF del algebra nos da pista de que existen soluciones enteras imaginarias en el plano complejo");
    break;
  }
}
