/*Alla sezione meteorlogica della città di Fermo, ad ogni DeltaT(intervallo di tempo espresso in ore) viene rilevata la temperatura
nell'arco di una giornata.
Scrivere un algoritmo che calcoli la temperatura massima, la temperatura minima, la temperatura media, l'escursione termica rilevata 
nell'arco della giornata, il numero delle temperature sotto lo zero e quello sopra*/
#include<stdio.h>
int main() 
{
	int DeltaT;					//intervallo di tempo espresso in ore
	float Temp;					//temperatura rilevata in un intervallo di tempo
	float Temp_Max;				//temperatura massima 
	float Temp_Min;				//temperatura minima
	float Temp_Media;			//temperatura media
	float Esc_Ter;				//escursione termica, la differenza tra la temperatura massima e minima 
	int N_Temp_Sopra_Zero;		//numero di temperature sopra lo zero
	int N_Temp_Sotto_Zero;		//numero di temperature sotto lo zero
	int I;						//variabile che contiene il numero di volte che bisogna rilevare la temperatura
	int C;						//variabile contatore
	float Somma_Temp;			//somma delle varie temperature
	int Ora;					//variabile che contiene l'ora della temperatura in quell'intervallo di tempo
	Temp_Max=-20;
	Temp_Min=50;
	Somma_Temp=0;
	N_Temp_Sopra_Zero=0;
	N_Temp_Sotto_Zero=0;
	ora=0;
	do{
		printf("Specificare l'intervallo di tempo, deve essere compreso tra 1 e 24 ");	//Chiedo di inserire l'intervallo di tempo
		scanf("%d",&DeltaT);
	}
		while((DeltaT<=0) || (DeltaT>24));										//Verifico se l'intervallo di tempo è compreso tra 0 e 24
	I=24/DeltaT;																//Calcolo quante volte in una giornata devo misurare la temperature
	for (C=0;C<I;C++) {															//Eseguo il ciclo le volte contenute nella variabile I 
		printf("Inserire la temperatura misurata alle ore %d:00 ",Ora);				//Chiedo di inserire la temperatura per quell'intervallo di tempo
		scanf("%f",&Temp);
		Ora+=DeltaT;
		if (Temp>Temp_Max)										//Verifico se per quell'intervallo di tempo la temperatura inserite è quella massima
			Temp_Max=Temp;
		if (Temp<Temp_Min)										//Verifico se per quell'intervallo di tempo la temperatura inserite è quella minima
			Temp_Min=Temp;
		Somma_Temp+=Temp;									//Faccio la somma di tutte le temperature necessario per il calcolo della temperatura media
		if (Temp>=0)										//Se la temperatura è maggiore o uguale a zero allora
			N_Temp_Sopra_Zero++;							//aggiungo uno al numero delle temperature sopra o zero
		else												//altrimenti se la temperatura è sotto lo zero
			N_Temp_Sotto_Zero++;							//aggiungo uno al numero delle temperature sotto lo zero		
	}
	Temp_Media=Somma_Temp/I;				//Trovo la temperatura media dividendo la somma delle temperature con il numero delle temperature
	Esc_Ter=Temp_Max-Temp_Min;				//Calcolo l'escursione termica sottraendo alla temperatura massima la temperatura minima
	printf("La temperatura massima e' %f\n",Temp_Max);			//Stampo a video la temperatura massima
	printf("La temperatura minima e' %f\n",Temp_Min);				//Stampo a video la temperatura minima
	printf("La temperatura media e' %f\n",Temp_Media);			//Stampo a video la temperatura media
	printf("L'escursione termica e' %f\n",Esc_Ter);				//Stampo a video l'escursione termica
	printf("Il numero delle temperature sopra lo zero sono %d\n",N_Temp_Sopra_Zero);	//Stampo a video il numero delle temperature sopra lo zero
	printf("Il numero delle temperature sotto lo zero sono %d\n",N_Temp_Sotto_Zero);	//Stampo a video il numero delle temperature sotto lo zero	
}
