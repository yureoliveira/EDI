
#include <stdlib.h>
#include <stdio.h>

void exibir_VI(int *vetor){
	int i;
	printf("----------------------------------\n");
	printf("|Tela para exibir valor impares do vetor|\n");
	printf("----------------------------------\n");
	
	printf("\n\n");
	for(i=0;i<10;i++){
		if(vetor[i]%2!=0){
		printf("%d\n",vetor[i]);	
		}	
	}
printf("\n \n");
	system("pause");
	
}
