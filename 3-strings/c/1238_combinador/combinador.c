//https://judge.beecrowd.com/pt/problems/view/1238
#include <stdio.h>
#include <string.h>

void scan(char s1[50],char s2[50]){//LER
	scanf("%49s %49s",s1,s2);
}

void print(char s[50]){//PRINTAR
	printf("%s\n",s);
}

void combinador(char s1[50],char s2[50], char s3[100]){//COMBINAR 

	int i = 0;
	int j1 = 0;
	int j2 = 0;
	int tam1 = strlen(s1);
	int tam2 = strlen(s2);

	while(tam1>j1 && tam2>j2){//enquanto ainda existem elementos nas duas strs
		s3[i] = s1[j1];
		s3[i+1] = s2[j2];
	       	i+=2;
		j1++;
		j2++;
	}

	if(tam1 == j1){//s1 acabou primeiro
		while(j2<strlen(s2)){
			s3[i] = s2[j2];
			j2++;
			i++;
		}
	}else{//s2 acabou primeiro
		while(j1<strlen(s1)){
			s3[i] = s1[j1];
			j1++;
			i++;
		}
	}

	s3[i] = '\0';//finaliza a string	
}

int main(){
	int n;
	int i=0;
	scanf("%d",&n);

	char s1[50];
	char s2[50];
	char s3[100];

	do{//repetir n vezes
		scan(s1,s2);	
		combinador(s1,s2,s3);
		print(s3);	
		i++;	
	}while(i<n);	
	
	return 0;
}
