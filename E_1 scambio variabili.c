/* E1: Date due variabili contenenti due valori, scambiare il contenuto delle due variabili 
AUTORE:Giovanni Forlini
DATA:14/11/2016
VERSIONE:1.0*/
#include <stdio.h>
main()
{
	int a;	//Variabile contenente il primo numero
	int b;	//Variabile contenenti il secondo numero 
	int c;	//Variabile di lavoro
	printf("Inserisci il primo numero ");
	scanf("%d",&a);					
	printf("Inserisci il secondo numero ");
	scanf("%d",&b);		
	c=a;	//Mettiamo nella variabile di lavoro il primo numero
	a=b;	//Mettiamo nella variabile del primo numero il secondo numero
	b=c;	//Mettiamo nella variabile del secondo numero il contenuto della variabile di lavoro quindi il primo numero
	printf("Il secondo numero nella prima variabile e' %d \n",a);
	printf("Il primo numero nella seconda variabile e' %d",b);
}
