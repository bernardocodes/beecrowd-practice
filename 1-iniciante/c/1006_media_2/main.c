#include <stdio.h>

int main(){
	float a,b,c;
	float p1 = 2,p2 = 3,p3 = 5;
	float media;
	
	//dig notas:
	scanf("%f%f%f",&a,&b,&c);

	media = (a*p1) + (b*p2) + (c*p3);
	media /= p1+p2+p3;

	printf("MEDIA = %.1f\n",media);	
	return 0;
}
