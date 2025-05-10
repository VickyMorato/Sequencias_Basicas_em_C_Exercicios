#include <stdio.h> 

int main(){
    char nome[20000], sobrenome[2000];

    printf("Digite seu nome:");
    scanf("%s", &nome);

    printf("Digite seu sobrenome:");
    scanf("%s", &sobrenome);

    printf("Ola %s %s , E um prazer te conhecer!\n", nome, sobrenome);

    return 0; 
}