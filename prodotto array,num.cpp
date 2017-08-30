/*1)scrivere un programma in speudocodifica e successivamente in linguaggio c che dato un vettore di k elementi con k compreso tra n1 e n2
	con n2 minore di 1000 e dispari e uno scalare num intero effettui il prodotto tra lo scalare e il vettore */
#include <stdio.h>
int main()
{
	int vet [1000];	//vettore 
	int n1;			
	int n2;
	int k;			//dimensione del vettore
	int num;		//numero in input e prodotto della moltiplicazione
	int i;			//contatore
	do{		//controllo dell'input di n2
		printf("Inserisci n2 che deve essere minore di 1000 e dispari ");
		scanf("%d",&n2);
	}
	while (n2>1000||(n2%2)==0);
	do{		//controllo dell'input di n1
		printf("Inserisci n1 che deve essere minore di %d ",n2);
		scanf("%d",&n1);
	}	
	while (n1>=n2);
	do{		//controllo dell'input di k
		printf("Inserisci la dimensione del vettore che deve essere compresa tra %d e %d ",n1,n2);
		scanf("%d",&k);
	}
	while (k<n1||k>n2);
	printf("Inserisci il numero ");
	scanf("%d",&num);
	for (i=0;i<k;i++){
		printf("Inserisci il numero che va dentro al vettore ");
		scanf("%d",&vet[i]);
		num*=vet[i];
	}
	printf("Il prodotto e' %d",num);
}	
