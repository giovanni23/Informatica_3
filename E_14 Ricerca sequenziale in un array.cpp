//Ricerca sequenziale in un array
#include <stdio.h>
int main(){
	int i;	//contatore
	int v[10];	//array
	int n;		//numero da cercare
	int t;		//flag del trovato
	int p;		//posizione del numero trovato
	for (i=0;i<10;i++){
		printf("Inserisci l'elemento %d dell'array ",i);
		scanf("%d",&v[i]);
	}
	printf("Inserisci il numero da cercare ");
	scanf("%d",&n);
	i=0;
	t=0;
	while (i<10 && t==0){
		if (n==v[i]){
			p=i;
			t=1;
		}
		i++;
	}
	if (t==1)	printf("Il numero e' in posizione %d",p);
	else 	printf("Numero non trovato");
}
