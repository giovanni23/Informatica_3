#include <stdio.h>
int main ()
{
	float d;		//Disabile
	float ac;		//Accompagnatore
	float al;		//Altezza
	float s;		//Supplemento
	float p;		//Prezzo
	float e;		//et�
	printf("Il cliente e' un disabile? (1=Si, 0=No) ");	 							//Chiediamo se il cliente � un disabile
	scanf("%f",&d);
	if(d==0){																		//se il cliente non � disabile allora
		printf("Il cliente e' un accompagnatore? (1=Si, 0=No) ");	 				//chiediamo se il cliente � un accompagnatore
		scanf("%f",&ac);													
		if (ac==0){																	//se il cliente non � un accompagnatore allora
			printf ("Inserire l'eta' del cliente ");								//chiediamo l'et� del cliente
			scanf("%f",&e);	
			if (e>60){																//se l'et� � maggiore di 60 allora
				p=25;																//il prezzo � 25�
				printf("Il cliente vuole il supplemento? (1=Si, 0=No) ");			//chiediamo se il cliente vuole il supplemento
				scanf("%f",&s);									
				if (s==1)															//se il cliente vuole il supplemento allora
					p=p+7.50;														//il prezzo � il prezzo iniziale pi� 7,50
			}
			else{																	//l'et� del cliente � minore di 60 allora
				printf("Inserire l'altezza ");										//chiediamo l'altezza del cliente
				scanf("%f",&al);
				if(al<=100){														//se l'altezza del cliente � minore di 100cm allora
					p=0;															//il prezzo � �0
					printf("Il cliente vuole il supplemento? (1=Si, 0=No) ");		//chiediamo se il cliente vuole il supplemento
					scanf("%f",&s);									
					if (s==1)														//se il cliente vuole il supplemento allora
						p=p+7.50;													//il prezzo � il prezzo iniziale pi� 7,50
				}
				else{																//l'altezza del cliente non � minore di 100cm allora
					if(al<=140){													//se l'altezza del cliente � minore di 140cm ma maggiore di 100cm allora
						p=28;														//il prezzo � �28
						printf("Il cliente vuole il supplemento? (1=Si, 0=No) ");	//chiediamo se il cliente vuole il supplemento 										
						scanf("%f",&s);
						if (s==1)													//se il cliente vuole il supplemento allora 
							p=p+7.50;												//il prezzo � il prezzo iniziale pi� � 7,50
					}
					else{															//se l'altezza del cliente non � minore di 140cm allora
						p=34.90;												 	//il prezzo � � 34,90	
						printf("Il cliente vuole il supplemento? (1=Si, 0=No) ");	//chiediamo se il cliente vuole il supplemento 										
						scanf("%f",&s);
						if (s==1)													//se il cliente vuole il supplemento allora 
							p=p+90.50;												//il prezzo � il prezzo iniziale pi� � 9,50
					}
				}					
			}
		}
		else{																	//se il cliente � un accompagnatore allora
			p=25.50;															//il prezzo � 25,50
			printf("Il cliente vuole il supplemento? (1=Si, 0=No) ");			//chiediamo se il cliente vuole il supplemento 										
			scanf("%f",&s);
			if (s==1)															//se il cliente vuole il supplemento allora 
				p=p+9.50;														//il prezzo � il prezzo iniziale pi� � 9,50	
		}	
	}		
	else{																		//se il cliente � disabile 
		p=0;
		printf("Il cliente vuole il supplemento? (1=Si, 0=No) ");				//chiediamo se il cliente vuole il supplemento 										
		scanf("%f",&s);
		if (s==1)																//se il cliente vuole il supplemento allora 
			p=p+7.50;															//il prezzo � il prezzo iniziale pi� � 7,50
	}
	printf("il prezzo da pagare e' %f",p);											//stampa il prezzo finale 
}
	 
	

