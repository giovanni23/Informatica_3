/* E8:Dato un numero compreso tra 2 e 10, stampare la relativa tabellina
AUTORE:Giovanni Forlini
DATA:30/12/2016
VERSIONE:1.0*/
#include<stdio.h>
int main()
{
	int num;	//numero
	int i;		//variabile contatore
	int tab;	//tabellina del numero
	do {
		printf("Inserisci il numero compreso tra 2 e 10 ");
		scanf("%d",&num);
	}	
	while ((num<2) || (num>10));
	i=0;
	tab=0;
	for (i=0;i<=10;i++){
		tab+=num;
		printf("%d\t", tab);
	}
}
