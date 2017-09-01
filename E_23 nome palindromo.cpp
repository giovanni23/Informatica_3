//Nome polindromo
#include <stdio.h>
int main(){
	int c;
	int i;
	char n[100];
	printf("Inserisci la parola ");
	scanf("%s",n);
	while (n[c]!='\0')	c++;
	i=0;
	c--;
	while ((n[c]==n[i])&&(c>i)){
		i++;
		c--;
	}
	if (c>i)	printf("Il nome non e' palindromo");
	else printf("Il nome e' palindromo"); 
}
