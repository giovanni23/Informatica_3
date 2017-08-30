/* E5:Media dei n numeri
AUTORE:Giovanni Forlini
DATA:30/12/2016
VERSIONE:1.0*/
#include <stdio.h>
int main()
{
	int n_num;	//numero di numeri dei quali bisogna calcolare la media
	int c;		//variabile contatore
	int s;		//somma dei numeri
	int n;		//numeri dei quali bisogna calcolare la media
	int m;		//media dei numeri
	c=0;
	s=0;
	printf("Inserisci il numero dei numeri dei quali bisogna calcolare la media ");
	scanf("%d",&n_num);
	while (c<n_num){
		printf("Inserisci il numero ");
		scanf("%d",&n);
		s+=n;
		c++;
	}
	m=s/n_num;
	printf("La media e' %d",m);
}
