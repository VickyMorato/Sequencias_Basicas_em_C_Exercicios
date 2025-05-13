#include <stdio.h>
#include <string.h>

int main(void){
    char nomecompleto[2000];
    float salario;
    int tamanho_nome;
    

    printf("Escreva seu nome completo:");
    scanf( "%1999[^\n]", nomecompleto);

    tamanho_nome = strlen(nomecompleto);

    printf("Qual seu salario atual:");
    scanf("%f", &salario);

    printf("O(a) Funcionario(a) %s tem um salario de %.2f em junho", nomecompleto, salario);

    return 0;

}