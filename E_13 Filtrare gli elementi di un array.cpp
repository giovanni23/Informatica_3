//Dato un array di dieci elementi contenente numeri interi, chiesti in input, copiare i numeri pari in un secondo array.
#include <stdio.h>
int main(){
	int num[10];	//array dei dieci elementi
	int pari[10];	//array dei numeri pari
	int i;			//contatore dei dieci elementi
	int c=0;			//contatore dei numeri pari
	for (i=0;i<10;i++){
		printf("Inserisci numero ",i);
		scanf("%d",&num[i]);
		if ((num[i]%2)==0)
			pari[c++]=num[i];
	}
	printf("I numeri pari sono: ");
	for (i=0;i<c;i++)
		printf("%d ",pari[i]);
}
