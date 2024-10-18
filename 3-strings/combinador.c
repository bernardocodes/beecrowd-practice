//https://judge.beecrowd.com/pt/problems/view/1238
#include <stdio.h>
#include <string.h> // Incluindo a biblioteca para strlen

void lerString(char s1[50], char s2[50]) {
    scanf("%49s %49s", s1, s2);
}

void printString(char s[50]) {
    // Usando strlen para imprimir apenas a parte válida da string
    for (int i = 0; i < strlen(s); i++) {
        printf("%c", s[i]);
    }
}

int main() {
    char s1[50];
    char s2[50];
    lerString(s1, s2);
    printString(s1);
    printf(" ");
    printString(s2);
    return 0;
}
