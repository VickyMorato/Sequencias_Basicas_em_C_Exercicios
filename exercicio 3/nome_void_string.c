#include <stdio.h>

int main(){
    char nomecompleto[2000];
    float salario;
    int nome;

    printf("Escreva seu nome completo:");
    scanf( "%1999[^\n]", nomecompleto);

    nome = strlen(nomecompleto);

    printf("Qual seu salario atual:");
    scanf("%f", salario);

    printf("O(a) Funcionario(a) %s tem um salario de %.2f em junho", nomecompleto, salario);

    return 0;

}