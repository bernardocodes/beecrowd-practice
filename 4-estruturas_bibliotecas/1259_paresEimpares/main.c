#include <stdio.h>

int parOuImpar(int a){//impar???
	if(a%2==0){
		//printf("PAR\n");
		return 0;
	}else{
		//printf("IMPAR\n");
		return 1;
	}
}

void printaVet(int vet[],int tam){
	for(int i=0;i<tam;i++){
		printf("%d ",vet[i]);
	}
}

int ordenaVet(){
	
}

int separaParImpar(int vet,int tam){
	int aux;
	for(int i=0;i<tam;i++){//percorrer o vetor
		if(parOuImpar(vet[i])==0){
			aux = vet[i];
			
	}
}

int main(){

	/*
	int A = 0;
	scanf("%d",&A);
	parOuImpar(A);
	*/

	int tam = 10;
	int vet[tam] = {0,1,2,3,4,5,6,7,8,9};//tem que ficar 0,2,4,6,8,1,3,5,7,9
	printaVet(vet,tam);

	return 0;
}
