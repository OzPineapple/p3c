void funBase(int nivel, int nodo, int lim, int *cont, int base)
{
	int k=0;

	if (nivel==lim)
	  return;

	(*cont)++;

	for (k=0; k<nivel; k++)
	   printf("\t");

	printf("nivel= %d, nodo= %d, contador= %d\n", nivel, nodo, *cont);

	for (k=0; k<base; k++)
	   funBase(nivel+1, base*nodo+k, lim, cont, base);
}
void ejercicio9(){
  int nivel=0, nodo=0,lim=0, cont=0, base=0;
  printf("\nInserte la cantidad de ramas: ");
  scanf("%i", &base );
  printf("\nInserte la longitud: ");
  scanf("%i", &lim );
  funBase(nivel, nodo, lim, &cont, base);
}
