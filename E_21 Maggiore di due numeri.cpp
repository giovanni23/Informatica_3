#include <stdio.h>

//in questa posizione definisco il mio sottoprogramma

//tipo di variabile in uscita		nome sottoprogramma		dati in input (vuoto=non ci sono dati in input)
int 								input_n					(int min, int max){
	//corpo del sottoprogramma
	int n;
	if (min>max){
		int temp;
		temp=min;
		min=max;
		max=temp;
	}	
	do{
		printf("Inserisci numero, compreso tra %d e %d: ",min,max);
		scanf("%d",&n);
	}while ((n<min) || (n>max));
	return n;
}
			

int main()
{
	int n1,n2,max;
		
//	In questo punto richiamo il mio sottoprogramma		
	n1=input_n(200,0);	//invocazione della funziona input_n
	n2=input_n(0,150);
	
	if (n1>n2)	max=n1;
	else max=n2;
	printf("Il numero maggiore e' %d",max);
}
