#include <stdio.h>

int main(){

  float n1,n2,m;
  float p1 = 3.5;
  float p2 = 7.5;

  scanf("%f%f",&n1,&n2);

  m = ( (n1*p1) + (n2*p2) ) / (p1+p2);

  printf("MEDIA = %.5f\n",m);
  
  return 0;
}
