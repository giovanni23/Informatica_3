#include <stdio.h>

int conta_vocale (char parola[]) {	//funzione per il conto delle vocali
	int i=0;	// variabile contatore
	int  tot=0;	//numero di vocali
	char c[256];	//nome 
	while (parola [i]!= '\0'){	//controllo del fine array
		printf("\n%d ; %d ; %c",tot,i,parola[i]);
		c[i]=parola[i];
		if (c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] ==  'o' || c[i] == 'u')	//controllo delle vocali
			tot++;
		i++;	
	}
	return tot;
}

int main(){
	char (nomi[100][256]); //nomi
	int n; // numero di nomi
	int i;	// contatore
	int tot;	//numero di vocali 
	int max;	//numero di vocali massimo
	int pos_max;	//posizione del nome con più vocali
	do {	//ciclo per l'input e il controllo del numero di nomi
		printf("Inserisci il numero di nomi, massimo 100 ");
		scanf("%d",&n);
	}while (n<1 || n>100);
	for (i=0; i<n;i++){	// ciclo per l'input dei nomi
		printf("Inserisci il nome, massimo 256 caratteri ");
		scanf("%s",nomi[i]);
	} 
	for (i=0;i<n;i++){
		printf("%d ; %s", i,nomi[i]);
	}
	max=0;
	for (i=0;i<n;i++){	//ciclo per il controllo del nome con il maggior numero di vocali 
		tot=conta_vocale(nomi[i]);
		if (max<tot){
			max=tot;
			pos_max=i;
		}
	}
	printf("Il nome con piu' vocali e' %s con %d vocali ", nomi[pos_max],max);
	
}

