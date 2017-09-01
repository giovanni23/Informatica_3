//Eliminazione di un elemento di un array con shift 
#include <stdio.h>
int main(){
	int i;		//contatore 
	int v[10];	//array
	int tot=10;	//contatore decrescente 
	int p;		//posizione dell'elemento da eliminare
	for (i=0;i<10;i++){
		printf("Inserisci l'elemtento %d dell'array ",i);
		scanf("%d",&v[i]);
	}
	printf("Inserisci la posizione dell'elemento da eliminare ");
	scanf("%d",&p);
	for (i=p;i<(tot-1);i++)
		v[i]=v[i+1];
	tot--;
	printf("Stampa dell'array\n");
	for (i=0;i<tot;i++)	
		printf("%d\t",v[i]);
}
