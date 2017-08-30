#include <stdio.h>	
int fattoriale (int n) {	//funzione per il calcolo del fattoriale
	if (n>1)	return n*fattoriale(n-1);
	else	return 1;
}

int main() {
	int numero;	//numero 
	long int risultato;	//fattoriale
	do{
 		printf ("Inserisci il numero, maggiore di 0 ");
 		scanf("%d",&numero);
	}while (numero<0);
	risultato=fattoriale(numero);
	printf("Il fattoriale e' %d",risultato);
}
