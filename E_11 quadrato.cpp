/* E10: Disegnare tramite l'uo del carattere asterisco un quadrato di lato n, con n compreso tra 2 e 20
AUTORE: Giovanni Forlini
VERSIONE: 1.0*/
#include <stdio.h>
int main(){
	int n;	//lato del quadrato
	int i;	//contatore righe 
	int k;	//contatore colonne
	do{
		printf("Inserisci il lato (compreso tra 2 e 20) ");
		scanf("%d",&n);
	}while ((n<2)||(n>20));
	for (i=0;i<n;i++){
		for (k=0;k<n;k++)	printf("*");
		printf("\n");
	}
}
