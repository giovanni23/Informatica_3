/*2)scrivere un programma in psuedocodififca esuccessivamente in linguaggio che consenta di prendere in input un vettore di k elementi con k minore di 100 e un 
	valore num. Il programma deve cercare il valore num e stampare il messaggio "num non trovato" nel caso che num non fosse presente nella lista; qualora num fosse
	presente nella lista il programma deve eliminarlo dalla lista con il metodo dello shift */
#include <stdio.h>
int main()
{
	int vet[100];	//vettore
	int k;			//dimensione dell'array
	int num;		//numero
	int i;			//contatore
	int trovato;	//variabile che dice se il numero è stato trovato nell'array
	int posto;		//variabile che dice in quale indice è stato trovato il numero nell'array
	do{		//controllo dell'input di k
		printf("Inserisci la dimensione del vettore che deve essere minore di 100 ");
		scanf("%d",&k);
	}
	while (k>=100);
	trovato=0;
	for (i=0;i<k;i++){	//ciclo per l'input dell'array
		printf("Inserisci il numero che va dentro al vettore ");
		scanf("%d",&vet[i]);
	}	
	printf("Inserisci il numero ");
	scanf("%d",&num);
	i=0;
	while (i<k && trovato==0){	//ciclo per controllare se num si trova dentro l'array
		if (vet[i]==num){
			posto=i;
			trovato=1;
		}
		i++;
	}
	if (trovato==1){	//se dentro l'array c'è num allora
		for (i=posto;i<k;i++)	//ciclo per lo shift
			vet[i]=vet[i+1];
		printf("Il vettore e':\n");	
		for (i=0;i<k-1;i++)		//ciclo per la stampa dell'array
			printf("%d\t",vet[i]);	
	}	
	else				//altrimenti se num non c'è nell'array allora
		printf ("%d non si trova nel vettore",num);	//stampo che non c'è
}
