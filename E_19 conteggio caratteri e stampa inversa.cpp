//Conteggio caratteri e stampa inversa
#include <stdio.h>
int main(){
	char nome[100];
	int c=0;
	int i;
	printf("Inserisci nome ");
	scanf("%s",nome);
	while (nome[c]!='\0')	c++;
	printf("Il nome ha %d caratteri",c);
	printf("Stampa nome\n");
	for (i=c-1;i>=0;i--)	printf("%c\t",nome[i]);
}
