/* E11: Caricamento di un'array e stampa inversa
AUTORE: Giovanni Forlini
VERSIONE: 1.0*/
#include <stdio.h>
int main(){
	int vet[10];	//array
	int x;			//contatore
	for (x=0;x<10;x++){
		printf("Inserisci il numero nell'indice %d ",x);
		scanf("%d",&vet[x]);
	}
	for (x=9;x>=0;x--){
		if (vet[x]!=0)	printf("%d\t",vet[x]);
	}
}
