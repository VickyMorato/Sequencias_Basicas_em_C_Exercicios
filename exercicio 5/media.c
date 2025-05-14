#include <stdio.h>

int main(){
    float media, num1, num2;

    printf("Me de a nota 1:");
    scanf("%f", &num1);

    printf("Me de a nota 2:");
    scanf("%f", &num2);

    media = (num1 + num2) /2;

    printf("A media das notas 1 e 2, sera: %.1f", media);

    return 0;

}