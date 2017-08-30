#include <stdio.h>
int main ()
{
	float d;		//Disabile
	float ac;		//Accompagnatore
	float al;		//Altezza
	float s;		//Supplemento
	float p;		//Prezzo
	float e;		//età
	printf("Il cliente e' un disabile? (1=Si, 0=No) ");	 							//Chiediamo se il cliente è un disabile
	scanf("%f",&d);
	if(d==0){																		//se il cliente non è disabile allora
		printf("Il cliente e' un accompagnatore? (1=Si, 0=No) ");	 				//chiediamo se il cliente è un accompagnatore
		scanf("%f",&ac);													
		if (ac==0){																	//se il cliente non è un accompagnatore allora
			printf ("Inserire l'eta' del cliente ");								//chiediamo l'età del cliente
			scanf("%f",&e);	
			if (e>60){																//se l'età è maggiore di 60 allora
				p=25;																//il prezzo è 25€
				printf("Il cliente vuole il supplemento? (1=Si, 0=No) ");			//chiediamo se il cliente vuole il supplemento
				scanf("%f",&s);									
				if (s==1)															//se il cliente vuole il supplemento allora
					p=p+7.50;														//il prezzo è il prezzo iniziale più 7,50
			}
			else{																	//l'età del cliente è minore di 60 allora
				printf("Inserire l'altezza ");										//chiediamo l'altezza del cliente
				scanf("%f",&al);
				if(al<=100){														//se l'altezza del cliente è minore di 100cm allora
					p=0;															//il prezzo è €0
					printf("Il cliente vuole il supplemento? (1=Si, 0=No) ");		//chiediamo se il cliente vuole il supplemento
					scanf("%f",&s);									
					if (s==1)														//se il cliente vuole il supplemento allora
						p=p+7.50;													//il prezzo è il prezzo iniziale più 7,50
				}
				else{																//l'altezza del cliente non è minore di 100cm allora
					if(al<=140){													//se l'altezza del cliente è minore di 140cm ma maggiore di 100cm allora
						p=28;														//il prezzo è €28
						printf("Il cliente vuole il supplemento? (1=Si, 0=No) ");	//chiediamo se il cliente vuole il supplemento 										
						scanf("%f",&s);
						if (s==1)													//se il cliente vuole il supplemento allora 
							p=p+7.50;												//il prezzo è il prezzo iniziale più € 7,50
					}
					else{															//se l'altezza del cliente non è minore di 140cm allora
						p=34.90;												 	//il prezzo è € 34,90	
						printf("Il cliente vuole il supplemento? (1=Si, 0=No) ");	//chiediamo se il cliente vuole il supplemento 										
						scanf("%f",&s);
						if (s==1)													//se il cliente vuole il supplemento allora 
							p=p+90.50;												//il prezzo è il prezzo iniziale più € 9,50
					}
				}					
			}
		}
		else{																	//se il cliente è un accompagnatore allora
			p=25.50;															//il prezzo è 25,50
			printf("Il cliente vuole il supplemento? (1=Si, 0=No) ");			//chiediamo se il cliente vuole il supplemento 										
			scanf("%f",&s);
			if (s==1)															//se il cliente vuole il supplemento allora 
				p=p+9.50;														//il prezzo è il prezzo iniziale più € 9,50	
		}	
	}		
	else{																		//se il cliente è disabile 
		p=0;
		printf("Il cliente vuole il supplemento? (1=Si, 0=No) ");				//chiediamo se il cliente vuole il supplemento 										
		scanf("%f",&s);
		if (s==1)																//se il cliente vuole il supplemento allora 
			p=p+7.50;															//il prezzo è il prezzo iniziale più € 7,50
	}
	printf("il prezzo da pagare e' %f",p);											//stampa il prezzo finale 
}
	 
	

