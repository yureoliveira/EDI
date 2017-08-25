#include<stdio.h>
#include<stdlib.h>
#include"inserir.h"
#include"exibir.h"
#include"exibir_VI.h"
#include"exibir_VP.h"


int menuV(){
	//int inserir,exibir, exibir_imp,exibir_par;
	int vet[10];
	int opmenu,menu;
	//int inserir,exibir, exibir_imp,exibir_par;		
			
	
			
	while(opmenu==0){system ("cls");	
				printf("----------------------------------\n");
				printf("|digite a opção desejada         |\n");
				printf("----------------------------------\n");
			
			printf(" |1- prencher vetor-----|\n |2- Exibir vetor--------|\n |3-exibir valor impares|\n |4- exibir valores par-| \n |5-sair----------------|\n");
			scanf("%d",&menu);			
			system ("cls");
			
			if(menu<=0 || menu>=6){
				printf("\nOpcao invalida\n");
				system("pause");
				menuV();
				system ("cls");
			} 
			else{
			
					switch(menu){
								case 1:
									inserir(vet);
									opmenu=0;
								break;
								case 2:
									exibir(vet);
									opmenu=0;
								break;
								case 3:
									exibir_VI(vet);
									opmenu=0;
								break;
								case 4:
									exibir_VP(vet);
									opmenu=0;
								break;
								case 5:
									opmenu++;
								break;
					}
			}
		
	}
	
	
	
	
}
