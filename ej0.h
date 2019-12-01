#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void ejercicio0(){
    printf("\nEste programa convierte cualquier número base 10 a base 20 y viseversa.\nInserte un número base 10: ");
    int numeroBase10;
    scanf("%i", &numeroBase10);
    int numeroBase10Clon = numeroBase10;
    int numeroBase20Tamanno = 0;
    
    while (numeroBase10Clon != 0){
        numeroBase10Clon = numeroBase10Clon / 20;
        numeroBase20Tamanno++;
    }
    int numeroBase20[numeroBase20Tamanno];
    int contador = numeroBase20Tamanno - 1;
    while (numeroBase10 != 0)    {
        numeroBase20[contador] = numeroBase10 % 20;
        numeroBase10 = numeroBase10 / 20;
        contador--;
    }
    printf("\nEl número en base 20 es: ");
    for (int i = 0; i < numeroBase20Tamanno; i++){
        printf("%i ", numeroBase20[i]);
    }
    
    printf("\nVisulización en notación maya:\n");
    for (int i = 0; i < numeroBase20Tamanno; i++)
    {
        for (int j = 0; j < (numeroBase20[i] % 5); j++){
            printf(".");
        }
        for (int j = 0; j < (numeroBase20[i] / 5); j++){
            printf("\n-----");
        }
        if(numeroBase20[i] == 0) printf("<o>");
        printf("\n\n");
    }
    
    printf("\nInserte un número de N digitos en base 20 para ser calculado a base 10.\nInserte la longitud del número: ");
    int digitoBase20;
    int longitudNumero;
    numeroBase10 = 0;
    scanf("%i", &longitudNumero);
    for (int i = 0; i < longitudNumero; i++){
        printf("\nInserte el digito posición %i: ", i);
        scanf("%i", &digitoBase20);
        numeroBase10 += digitoBase20 * pow(20, i);
    }
    printf("\nEl número en base 10 es: %i", numeroBase10);
}