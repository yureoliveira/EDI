
#include <stdlib.h>
#include <stdio.h>

void exibir(int *vetor){
	int i;
	printf("----------------------------------\n");
	printf("|Tela para inserir valor no vetor|\n");
	printf("----------------------------------\n");
	
	printf("\n\n");
	for(i=0;i<10;i++){
		
		printf("%d\n",vetor[i]);
		
	}

	system("pause");
	
}
