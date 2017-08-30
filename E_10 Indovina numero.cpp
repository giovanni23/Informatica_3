/* E10: Indovina numero
AUTORE: Giovanni Forlini
VERSIONE: 2.0*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int n_c;			//numero generato dal computer
	int indovinato;		//se uguale a 1 allora n_c è uguale a n_u
	int t;				//numero di tentativi
	int n_u;			//numero inserito dall'utente
	int range=100;		//range del numero da indovinare
	int versione;		//livello di difficoltà
	t=0;
	srand(time(NULL));
	indovinato=0;
	n_c=rand();
	n_c=n_c%range;
	do{
		printf("Inserisci la difficolta (0=facile 1=difficile)");
		scanf("%d",&versione);
	}while((versione!=0)||(versione!=1));	
	do{
		do{
			printf("Inserisci un numero (compreso tra 0 e %d), hai ancora %d tentavi ",range,10-t);
			scanf("%d",&n_u);
		}while((n_u<0)||(n_u>range));
		if (n_u==n_c)	indovinato=1;
		else{
			printf("Hai sbagliato ritenta\n");
			if (versione==0){
				if (n_u>n_c) printf("Il numero da indovinare e' minore di %d\n",n_u);
				else printf("Il numero da indovinare e' maggiore di %d\n",n_u);
			}	
		}	
		t++;
	}while ((t<10)&&(indovinato==0));
	if (indovinato==1) printf("Hai indovinato con %d tentativi",t);
	else printf ("Non hai indovinato, il numero era %d",n_c);
}
