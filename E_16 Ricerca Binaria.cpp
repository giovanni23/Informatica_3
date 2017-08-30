#include<stdio.h>
int main(){
	int num[]={8,10,14,16,20,25,31,37,40,50};	//array
	int n;										//numero da cercare
	int min;									//posizione minore dell'array
	int max;									//posizione maggiore dell'array
	int centro;									//posizione centrale dell'array, è la posizione dell'array che viene controllata
	int trovato;								//se trovato è uguale a 1 allora il numero da cercare è stato trovato
	int i;										//contatore del numero di passi eseguiti
	min=0;
	max=9;
	trovato=0;
	i=0;
	printf("Inserisci il numero da cercare ");
	scanf("%d",&n);
	while((trovato==0)&&(min<=max)){			//eseguo il ciclo quando il numero non è stato trovato e non è finita la ricerca sull'array
		centro=(min+max)/2;						
		if (n==num[centro])		trovato=1;		//se il numero da trovare si trova nell'array allora imposto trovato uguale a 1
		else{									//altrimenti
			if (n>num[centro])	min=centro+1;		//se il numero da trovare è più grande del numero nell'array allora scarto la parte a sinistra dell'array
			else				max=centro-1;		//altrimenti scarto la parte a destra dell'array
		}
		i++;									//incremento il numero di passi eseguiti
	}
	if (trovato==1)				printf("Il numero e' stato trovato nella posizione %d.   \nSono stati eseguiti %d passi",centro+1,i);	//se il numero è stato trovato stampo in output un messaggio che dice che il numero è stato trovato
	else 						printf("Il numero non e' stato trovato");																//altrimenti stampo in output un messaggio che dice che il numero non si trova nell'array
}
