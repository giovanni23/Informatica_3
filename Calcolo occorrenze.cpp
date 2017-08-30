 #include <stdio.h>
int main()
{
	char nome [101];		//array di char contenente il nome
	char copia_nome[101];	//copia dell'array nome
	int scelta;				//scelta del menù
	int c;					//contatore della lunghezza del nome
	int i;					//contatore dei caratteri di controllare
	int scelta1;			//se uguale a 1 la scelta numero 1 è già stata eseguita
	char x;					//carattere da confrontare
	int frequenza;			//frequenza di un carattere
	scelta1=0;
	do{
		printf("			Calcolo delle occorrenze di una stringa\n");
		printf("1- Inserimento del nome (massimo 100 caratteri)\n");
		printf("2- Calcolo della lunghezza del nome\n");
		printf("3- Calcolo delle frequenze\n");
		printf("0- EXIT\n");
		printf("\n");
		do{
			printf("Inserisci la tua scelta (0-3): ");
			scanf("%d",&scelta);
		}while ((scelta<0)||(scelta>3));	
		switch (scelta){
			case 1:										//inserimento del nome
				printf ("Inserisci il nome, massimo di 100 caratteri: ");
				scanf("%s",nome);
				scelta1=1;
				printf ("\nClicca un tasto per tornare al menu'");
				getchar();
				getchar();
			break;
			case 2:										//contatore della lunghezza
				if (scelta1==1){
				c=0;	
				while (nome[c]!='\0') c++;
				printf("La lunghezza del nome e' %d",c);		
				}
				else printf ("\nESEGUIRE PRIMA LA SCELTA NUMERO 1\n");
				printf ("\nClicca un tasto per tornare al menu'");
				getchar();
				getchar();
			break;	
			case 3:								//calcolo delle occorrenze
				if (scelta1==1){
					i=0;
					while (nome[i]!=0){
						copia_nome[i]=nome[i];
						i++;
					}	
					i=0;
					while (copia_nome[i]!=0){
						x=copia_nome[i];
						if (x!='0'){
							c=0;
							frequenza=0;
							while (copia_nome[c]!=0){
								if (copia_nome[c]==x){
									frequenza++;
									copia_nome[c]='0';
								}
								c++;
							}
							printf("Il carattere %c si ripete %d volte\n",x,frequenza);
						}
						i++;
					}
				}
				else printf ("\nESEGUIRE PRIMA LA SCELTA NUMERO 1\n");
				printf ("\nClicca un tasto per tornare al menu'");
				getchar();
				getchar();
			break;	
			default:
			break;
		}
		printf ("\n");
		printf("--------------------------------------------------------------------------------");
		printf("\n\n");
	}while (scelta!=0);
}
