//Dati due array ordinati (es. ordine crescente) si vuole creare un terzo array anch'esso ordinato contenente tutti gli elementi dei due array
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

void merge_array(int a1[],int a2[],int l1,int l2,int m[]){
	int i1=0;
	int i2=0;
	int i3=0;
	while (i1<l1 && i2<l2){
		if (a1[i1]<a2[i2]){
			m[i3]=a1[i2];
			i1++;
		}
		else{
			m[i3]=a2[i2];
			i2++;
		}
		i3++;
	}
	if (i1==l1){
		while (i2<l2){
			m[i3]=a2[i2];
			i3++;
			i2++;
		}
	}
	else{
		while (i1<l1){
			m[i3]=a1[i1];
			i3++;
			i1++;
		}
	}
}

int main(){
	int a1[10];
	int dim1;
	int a2[10];
	int dim2;
	int a3[10];
	int dim3;
	int a4[10];
	int dim4;
	int m[40];
	int t1[20];
	int t2[20];
	printf("Inserisci la dimensione del primo array ");
	scanf("%d",&dim1);
	printf("Inserisci il primo array\n");
	input_array(a1,dim1);
	printf("Inserisci la dimensione del secondo array ");
	scanf("%d",&dim2);
	printf("Inserisci il secondo array\n");
	input_array(a2,dim2);
	printf("Inserisci la dimensione del terzo array ");
	scanf("%d",&dim3);
	printf("Inserisci il terzo array\n");
	input_array(a3,dim3);
	printf("Inserisci la dimensione del quarto array ");
	scanf("%d",&dim4);
	printf("Inserisci il quarto array\n");
	input_array(a4,dim4);
	merge_array(a1,a2,dim1,dim2,t1);
	merge_array(a3,a4,dim3,dim4,t2);
	merge_array(t1,t2,dim1+dim2,dim3+dim4,m);
	output_array(m,dim1+dim2+dim3+dim4);
}
