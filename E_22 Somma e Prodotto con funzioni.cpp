/* E22: Dati in input due numeri calcolare la somma e il prodotto usando le funzioni
AUTORE: Giovanni Forlini
VERSIONE: 1.0*/
#include <stdio.h>
int somma_n(int n1,int n2){
	int s;
	s=n1+n2;
	return s;
}
int prodotto_n(int n1,int n2){
	int p;
	p=n1*n2;
	return p;
}
int main(){
	int a;		//numero 1
	int b;		//numero 2
	int s;		//somma
	int p;		//prodotto
	printf("Inserisci il primo numero ");
	scanf("%d",&a);
	printf("Inserisci il secondo numero ");
	scanf("%d",&b);
	s=somma_n(a,b);
	p=prodotto_n(a,b);
	printf("La somma e' %d\n",s);
	printf("Il prodotto e' %d\n",p);
}
