//Inserimento di un elemento in un array ordinato 
#include <stdio.h>
int main(){
	int i;			//contatore e posizione dell'elemento da aggiungere
	int num[10];	//array
	int n;			//numero da cercare 
	int trovato;	//flag trovato
	int x;			//contatore
	printf("Inserisci l'elemtento 1 dell'array, in ordine crescente ");
	scanf("%d",&num[i]);
	for (i=1;i<10;i++){
		do{
			printf("Inserisci l'elemento %d dell'array, in ordine crescente ",i);
			scanf("%d",&num[i]);
		}while (num[i]<num[i-1]);
	}
	printf("Inserisci il numero da inserire ");
	scanf("%d",&n);
	i=0;
	trovato=0;
	while (i<10 && trovato==0){
		if (n <= num[i])
			trovato=1;
		else 
			i++;
	}
	x=9;
	while (x>i){
		num[x]=num[x-1];
		x--;
	}
	num[i]=n;
	printf("Stampa dell'array\n");
	for (i=0;i<10;i++)
		printf("%d\t",num[i]);
}
