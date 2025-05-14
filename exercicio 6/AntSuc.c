#include <stdio.h>

int main(){
    int num1, s, a;

    printf("Coloque um numero:");
    scanf("%d", &num1);

    a = num1 - 1;
    s = num1 + 1;

    printf("O sucessor de %d sera: %d e o antecessor sera: %d", num1, s, a);



    return 0;

}