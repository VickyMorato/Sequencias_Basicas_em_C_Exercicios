#include <stdio.h>

int main(){
    float metros, km, hm, dam, dm, cm, mm;

    printf("Escreva um valor em metros:");
    scanf("%f", &metros);

    km = metros / 1000;
    hm = metros / 100;
    dam = metros / 10;
    dm = metros * 10;
    cm = metros * 100;
    mm = metros * 1000;

    printf("O valor de %1f m em km sera: %f km \n ",metros, km);
    printf("O valor de %1f m em hm sera: %2f hm \n ",metros, hm);
    printf("O valor de %1f m em Dam sera: %f Dam \n ",metros, dam);
    printf("O valor de %1f m em dm sera: %.1f dm \n",metros, dm);
    printf("O valor de %1f m em cm sera: %.1f cm \n", metros, cm);
    printf("O valor de %1f m em mm sera: %.1f mm \n",metros, mm);

    return 0;
}