/* E7: Datin numeri interi trovare il numero minimo
AUTORE:Giovanni Forlini
DATA:30/12/2016
VERSIONE:1.0*/
#include<stdio.h>
int main()
{
	int n_num;	//numero di numeri interi dei quali bisogna trovare il numero minimo 
	int i;		//variabile contatore
	int min;	//variabile che contiene il numero minimo 
	int n;		//numero
	printf("Inserisci il numero di numeri interi dei quali bisogna calcolare il minimo ");
	scanf("%d",&n_num);
	i=1;
	printf("Inserisci il numero ");
	scanf("%d", &min);
	while (i<n_num) {
		printf("Inserisci il numero ");
		scanf("%d",&n);
		if (n<min)
			min=n;
		i++;	
	}
	printf("Il numero minimo e' %d", min);
}
