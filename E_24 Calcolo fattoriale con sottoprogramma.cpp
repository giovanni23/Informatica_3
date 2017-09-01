//Calcolo fattoriale con sottoprogramma 
#include <stdio.h>
int fattoriale(int n){
	int i;
	int fat;
	if (n>=0){
		fat=1;
		for (i=n;i>0;i--)	fat=fat*i;
		return fat;
	}
	else	return 0;
}

int main(){
	int x;
	int f;
	int scelta;
	do{
		do{
			printf("Inserisci il numero ");
			scanf("%d",&x);
		}while(x<0);
		f=fattoriale(x);
		printf("Il fattoriale di %d e' %d\n",x,f);
		printf("Vuoi calcolare il fattoriale di un altro numero, 0=no 1=si ");
		scanf("%d",&scelta);
	}while(scelta==1);
}
