#include <stdio.h>
#include <stdlib.h>
void inserir(int *vetor){
	int i;
	printf("----------------------------------\n");
	printf("|Tela para inserir valor no vetor|\n");
	printf("----------------------------------\n");
	for(i=0;i<10;i++){
		
		printf("Digite um numero inteiro\n");
		scanf("%d",&vetor[i]);
	}	
	
}
