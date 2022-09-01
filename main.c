#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void imprimeAleatorio(void){
	int VetOriginal[10];
	srand(time(NULL));
	
	int i;
	int maiorValor = 0;
	for(i=0; i <10; i++){
		VetOriginal[i] = rand()%100;
	}
	
	for(i=0; i< 10; i++){
		printf("%d ", VetOriginal[i]);
		printf("\n");
	}
}

void imprimeMaior(void){
	int VetOriginal[10];
	srand(time(NULL));
	
	int i;
	int maiorValor = 0;
	for(i=0; i <10; i++){
		VetOriginal[i] = rand()%100;
		if(i == 0){
			VetOriginal[i] = maiorValor;
		}
		if(VetOriginal[i] > maiorValor){
			maiorValor = VetOriginal[i];
		}
	}	
	
	for(i=0; i< 10; i++){
		printf("%d ", VetOriginal[i]);
		printf("\n");
	}
	
	printf("Maior Valor: %d", maiorValor);
}

void imprimePares(void){
	int VetOriginal[10];
	srand(time(NULL));
	
	int i;
	int quantidadePares = 0;
	for(i=0; i <10; i++){
		VetOriginal[i] = rand()%100;
		if(i % 2 == 0){
			quantidadePares = quantidadePares + 1;
		}
	}	
	
	for(i=0; i< 10; i++){
		printf("%d ", VetOriginal[i]);
		printf("\n");
	}
	
	printf("Quantidade pares: %d", quantidadePares);
}

void imprimeSoma(void){
	int VetOriginal[10];
	srand(time(NULL));
	
	int i;
	int soma = 0;
	for(i=0; i <10; i++){
		VetOriginal[i] = rand()%100;
		soma = soma + VetOriginal[i];
	}	
	
	for(i=0; i< 10; i++){
		printf("%d ", VetOriginal[i]);
		printf("\n");
	}
	
	printf("Soma dos numeros: %d", soma);
}

void imprimeOrdemInversa(void){
	int VetOriginal[10];
	srand(time(NULL));
	
	int i;
	for(i=0; i <10; i++){
		VetOriginal[i] = rand()%100;
	}	
	
	for(i=0; i < 10; i++){
		printf("%d ,", VetOriginal[i]);
		//printf("\n");
	}
	
	printf("\nOrdem inversa: ");
  	for(i = VetOriginal - 1; i >= 0; i = i-1){
    	printf("%d , ", VetOriginal[i]);
  	}
}

void imprimeOrdemCrescente(void){
	int VetOriginal[10];
	srand(time(NULL));
	
	int i;
	int j;
	int aux;
	for(i=0; i <10; i++){
		VetOriginal[i] = rand()%100;
	}	
	
	for(i=0; i < 10; i++){
		printf("%d ,", VetOriginal[i]);
		//printf("\n");
	}
	
	printf("\nOrdem crescente: ");
	int vetor;
  	for(i = 0; i < 10; i++){
    	for(j= i+1; j <10; j++){
    		if(VetOriginal[i] > VetOriginal[j]){
    			aux = VetOriginal[i];
    			VetOriginal[i] = VetOriginal[j];
    			VetOriginal[j] = aux;
			}	
		}
		printf("%d , ", VetOriginal[i]);
  	}
  	
}

int main(int argc, char *argv[]) {
	int opcao;
	printf("Digite 1 - para criar um vetor com 10 numeros aleatorios \n");
	printf("Digite 2 - para mostrar o elemento de maior valor do vetOriginal \n");
	printf("Digite 3 - para contabilizar quantos elementos sao pares no vetOriginal \n");
	printf("Digite 4 - para mostrar o valor do somatorio dos elementos do vetOriginal \n");
	printf("Digite 5 - para mostrar os elementos do vetorOriginal na ordem inversa(O vetor deve ser invertido de verdade) \n");
	printf("Digite 6 - para ordenar o vetor crescentemente(Ordem crescente dos numeros) \n");
	printf("Digite 7 - para sair \n");
	printf("----------------------------------------------------- \n");
	scanf("%d", &opcao);
	
	printf("----------------------------------------------------- \n");
	
	switch(opcao){
		case 1:
			printf("Imprimindo 10 numeros aleatorios \n");
			imprimeAleatorio();
			break;
		
		case 2:
			imprimeMaior();
			break;
		
		case 3:
			imprimePares();
			break;
		
		case 4:
			imprimeSoma();
			break;
		
		case 5:
			imprimeOrdemInversa();
			break;
			
		case 6:
			imprimeOrdemCrescente();
			break;
			
		case 7:
			system("EXIT");
			break;
	}
	
}
