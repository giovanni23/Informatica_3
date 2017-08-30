/* E6:Calcolo del fattoriale
AUTORE:Giovanni Forlini
DATA:30/12/2016
VERSIONE:1.0*/
#include <stdio.h>
int main()
{
	int fatt;	//fattoriale
	int num;	//numero
	printf("Inserisci il numero ");
	scanf("%d",&num);
	fatt=1;
	while (num>0){
		fatt=fatt*(num--);
	}
	printf("Il fattoriale e' %d", fatt);
}
