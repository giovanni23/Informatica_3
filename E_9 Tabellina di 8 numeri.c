/* * E9: Stampare le tabelline di tutti i numeri naturali compresi tra 2 e 10. Una tabellina per riga
AUTORE:Giovanni Forlini
DATA:18/12/2016
VERSIONE:1.0*/

#include<stdio.h>
int main()
{
	int n;		//variabile contatore in cui sono inseriti i numeri da cui dobbiamo ricavare la tabellina
	int i;		//variabile contatore in cui sono inseriti quanti numeri per una tabellina 
	int tab;	//variabile dove è inserita la tabellina da stampare
	for (n=2;n<=10;n++){	//ciclo per calcolare le tabelline di ogni numero da 2 a 10
		tab=0;
		printf("La tabellina di %d e'",n);				
		for (i=0;i<10;i++){	//ciclo per calcora la tabellina di un numero il quale verra incrementtato ad ogni ciclo
			tab+=n;				//calcolo dei numeri che costituiscono la tabellina
			printf("\t%d",tab);	//stampo i vari numeri, alla fine del ciclo tutti i numeri stampati su una riga sarà la tabellina di quel numero
		}
		printf("\n");			//Vado accapo per stampare una tabellina per riga
	}
}
