/*E_2:Date tre variabili, trovare il valore massimo delle tre
AUTORE:Giovanni Forlini - 3INA
DATA:14/11/2016
VERSIONE:1.0*/
#include<stdio.h>
main()
{
	int a;	//Variabile contenente il primo numero
	int b;	//Variabile contenente il secondo numero 
	int c;	//Variabile contenente il terzo numero
	int max;	//Variabile contenente il numero massimo 
	printf("Inserisci il primo numero ");
	scanf("%d",&a);
	printf("Inserisci il secondo numero ");
	scanf("%d",&b);
	printf("Inserisci il terzo numero ");
	scanf("%d",&c);
	if(a>b)		//Vede il numero maggiore tra i primi tue numeri 
		max=a;	//Se è maggiore il primo numero assegniamo al primo numero la variabile max
	else
		max=b;	//Altrimenti assegniamo al secondo numero la variabile max
	if (max<c)	//Vede il numero maggiore tra la variabile max e il terzo numero 
		max=c;	//Se è maggiore il terzo numero assegniamo al terzo numero la variabile max
	printf("il valore massimo tra i tre numeri e' %d",max);			
}
