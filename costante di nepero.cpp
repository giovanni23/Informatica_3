/*Scrivere un programma per calcolare i primi n termini per il calcolo della costante di nepero

n è un valore preso in input minore di 10 
AUTORE:Giovanni Forlini - 3INA
DATA:09/01/2017
VERSIONE:1.0 */
#include <stdio.h>
int main()
{
	int n;		//n necessari per la succesione
	float fatt;	//fattoriale di un numero
	int k;		//numero del quale bisogna calcolare il fattoriale
	int i;		//numeri di cicli che corrispondono ad n
	float e;	//costante di nepero
	do{																			//ciclo per il controllo del valore in input di n
		printf("Inserisci quanti n termini necessari per la succesione, un numero compreso tra 0 e 10 ");
		scanf("%d",&n);
	}
	while ((n>10) || (n<=0));
	e=1;
	for(i=1;i<=n;i++){								//ciclo for  per il calcolo della costante di nepero
		fatt=1;
		k=i;
		while(k>0)									//ciclo while per il calcolo di ogni fattoriale
			fatt=fatt*(k--);
		e=e+1/fatt;	
	}
	printf("la costante di nepero e' %f",e);
}
