#include <stdio.h>

int contPares = 0;

void igualaVet(int *vet, int *vetPares, int *vetImpares, int tam){//RETORNA VET PARES E IMPARES SEPARADOS
	for(int i=0;i<contPares;i++){
		vetPares[i] = vet[i];
	}

	for(int i=contPares;i<tam;i++){
		vetImpares[i] = vet[contPares+i];
	}	
}

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
	int aux;
	int menor=0;

	do{	
		for(int i=0;i<tam;i++){

			/*if(parOuImpar(vet[i])==0){//cont par
			  contPares++;
			  }*/
			if(vet[menor] < vet[i]){//troca de pos
				aux = vet[menor];
				vet[menor] = vet[i];
				vet[i] = aux;
			}
		}
		menor++;//nesse ponto já achamos o menor elemento, e estamos em busca do segundo menor. ent andar com índice
	}while(menor < tam);
}

void separaParImpar(int *vet,int tam){//PARES A ESQUERDA
	int aux;
	int par = 0;
	int imp = contPares;
	for(int i=0;i<tam;i++){
		if(parOuImpar(vet[i])==0){
			aux = vet[par];
			vet[par] = vet[i];
			vet[i] = aux;
			par++;
			contPares++;
		}else{
			aux = vet[imp];
			vet[imp] = vet[i];
			vet[i] = aux;
			imp++;

		}	
	}
}

int main(){

	int tam = 10;
	int vet[] = {1,9,2,7,88,3,4,6,5,0};//tem que ficar 0,2,4,6,8,1,3,5,7,9

	separaParImpar(vet,tam);//AQ
	printaVet(vet,tam);			
	printf("\nqtd de pares = %d",contPares);
	printf("\n");

	int vetPares[contPares];
	int vetImpares[tam-contPares];
	igualaVet(vet,vetPares,vetImpares,tam);
	printaVet(vetPares,contPares);	

//	ordenaVet(vet,tam);	
//	printaVet(vet,tam);

	return 0;
}
