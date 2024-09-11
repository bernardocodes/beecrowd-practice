#include <stdio.h>

int main(){
  
  int num, h;
  float s;
  float salario;
  
  scanf("%d%d",&num, &h);
  scanf("%f",&s);

  salario = h * s;

  printf("NUMBER = %d\n",num);
  printf("SALARY = U$ %.2f\n",salario);
  
  return 0;
}
