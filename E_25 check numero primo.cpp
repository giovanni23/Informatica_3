//Creare un programma che dato un numero intero positivo verifichi se il numero è primo (divisibile per se stesso e per 1)
#include <stdio.h>
int check_primo(int n){
	int primo=1;
	int i=2;
	while ((primo==1)&& (i<=(n/2))){
		if ((n%i)==0)	primo=0;
		i++;
	}	
	return primo;
}

int main(){
	int n;
	int primo;
	do{
		printf("Inserisci il numero,maggiore di 1 ");
		scanf("%d",&n);	
	}while (n<=1);
	primo=check_primo(n);
	if (primo==1)	printf("%d e' un numero primo",n);
	else 	printf("%d non e' un numero primo",n);
}
