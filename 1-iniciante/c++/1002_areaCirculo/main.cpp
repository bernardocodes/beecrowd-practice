#include <iostream>
#include <stdio.h>

int main() {
    
    double pi = 3.14159; 
    double area;
    double raio;
    
    std::cin >> raio;

    area = pi * (raio * raio);

    printf("A=%.4lf\n", area);

    return 0;
}

//Mudei para double pq o float estava arredondando as últimas casas decimais;
