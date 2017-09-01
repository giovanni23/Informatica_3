//Invertirre elementi di un array
#include <stdio.h>
void input_array(int *vet,int dim){										//funzione per l'input di un'array
	int i;
	for (i=0;i<dim;i++){
		printf("Inserisci l'elemento della posizione %d ",i);
		scanf("%d",&vet[i]);
	}
}

void output_array(int* vet, int dim){									//funzione per l'output di un'array 
	printf("Stampa array\n");
	int i;
	for (i=0;i<dim;i++) printf("%d\t",vet[i]);
}

int main(){
	int n[10];	//array
	int a;		//di lavoro
	int i;		//contatore 
	int x=0;		
	input_array(n,10);
	for (i=9;i>x;i--){
		a=n[i];
		n[i]=n[x];
		n[x]=a;
		x++;
	}
	output_array(n,10);
}
