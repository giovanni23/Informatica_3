//confronto tra due stringhe 
#include <stdio.h>
int main(){
	int c;	//contatore
	int uguali;	//flag 
	char parola1[100];
	char parola2[100];
	printf("Inserisci la prima parola ");
	scanf("%s",parola1);
	printf("Inserisci la seconda parola ");
	scanf("%s",parola2);
	c=0;
	uguali=1;
	while (((parola1[c]!='\0')||(parola2[c]!='\0'))&&(uguali==1)){
		if (parola1[c]!=parola2[c])	uguali=0;
		else c++;
	}
	if (uguali==1)	printf("Le parole sono uguali");
	else printf("Le parole sono diverse");
}
