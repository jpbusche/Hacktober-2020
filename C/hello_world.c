#include<stdio.h>

int main() {
    char nome[252];
    printf("Qual seu nome: ");
    gets(nome);
    printf("Ola Mundo! Sou %s", nome);
    return 0;
}