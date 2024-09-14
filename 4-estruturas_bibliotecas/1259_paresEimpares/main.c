#include <stdio.h>

int contPares = 0;

int parOuImpar(int a){//impar???
	if(a%2==0){
		//printf("PAR\n");
		return 0;
	}else{
		//printf("IMPAR\n");
		return 1;
	}
}

void printaVet(int vet[],int tam){//imprime vet
	for(int i=0;i<tam;i++){
		printf("%d ",vet[i]);
	}
}

void ordenaVet(int *vet, int tam){//ORDENAÇÃO DA ESQUERDA PARA A DIREITA
	int menor = 0;//posição analisada
	int aux;	
	for(int i=0;i<tam-1;i++){//pares
		for(int j=i;j<tam;j++){
			if(vet[menor] < vet[j]){
				aux = vet[menor];
				vet[menor] = vet[j];
				vet[j] = aux;
			}
		}
	}
}

void separaParImpar(int *vet,int tam){//PARES A ESQUERDA
	int aux;
	int p1 = 0;
	for(int i=0;i<tam;i++){
		if(parOuImpar(vet[i])==0){
			aux = vet[p1];
			vet[p1] = vet[i];
			vet[i] = aux;
			p1++;
			contPares++;
		}	
	}
}

int main(){

	int tam = 10;
	int vet[] = {0,7,2,8,4,5,9,1,3,6};//tem que ficar 0,2,4,6,8,1,3,5,7,9

	ordenaVet(vet,tam);
	separaParImpar(vet,tam);//AQ
	printaVet(vet,tam);

	return 0;
}
