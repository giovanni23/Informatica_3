/*E_3:Calcolare la somma dei primi n numeri 
AUTORE:Giovanni Forlini - 3INA
DATA:14/11/2016
VERSIONE:1.0 */
#include<stdio.h>
main()
{
	int s;	//Variabile che contiene la somma dei primi n numeri
	int c;	//Variabile contatore 
	int n;  //Variabile che contiene quanti n numeri sono necessari
	printf("Inserisci quanti n numeri sono necessari per la somma ");
	scanf("%d",&n);
	s=0;
	c=0;
	while(c<n){	//ciclo che calcola somma dei primi n numeri
		c=c+1;
		s=s+c;
	}
	printf("La somma dei primi n numeri e' %d", s);	
}
