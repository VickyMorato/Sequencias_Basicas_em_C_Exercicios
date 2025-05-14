#include <stdio.h>

int main(){
    float tp, dobro, num;

    printf("Me de um numero:");
    scanf("%f", &num);

    dobro = num * 2;
    tp = num / 3;

    printf("O dobro de %.1f sera: %.1f  \n  a terca parte sera: %.5f", num, dobro, tp);

    return 0;
}