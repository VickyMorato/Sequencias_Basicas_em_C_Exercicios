#include <stdio.h>

int main(){
    int soma, num1, num2; 

    printf("Digite o numero A:");
    scanf("%d", &num1);

    printf("Digite o numero B:");
    scanf("%d", &num2);

    soma = num1 + num2;
    
    printf("A soma dos numeros sera: %.2d", soma);
    
    return 0;
}