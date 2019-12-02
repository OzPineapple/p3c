void ejercicio3(){
  float angle[2];
  float radio[2];
  float x[2];
  float y[2];
  printf("\nElija el formato de número imaginario que usará: \n1.- Polar\n2.- Carteciano\n¿Opcion?");
  int op; scanf("%i", &op );
  switch (op) {
    case 1:
      for (int i = 0; i < 2; i++) {
        printf("\nNumero %i:\nAngulo? ", i);
        scanf("%f", &angle[i] );
        printf("\nRadio?");
        scanf("%f", &radio[i] );
      }
      printf("\nResultado: %f e ^  i %f ", (radio[0]+radio[1]), (angle[0]+angle[1]) );
    break;
    case 2:
      for (int i = 0; i < 2; i++) {
        printf("\nNumero %i:\nX? ", i);
        scanf("%f", &x[i] );
        printf("\nY?");
        scanf("%f", &y[i] );
        printf("\nResultado: %f + i %f", (x[0] + x[1]), (y[0]+y[1]) );
      }
    break;
  }
}
