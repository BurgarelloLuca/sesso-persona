#include <iostream>
#include <stdio.h>
int main() {
   char nome, sesso;
    printf("inserire il nome");
    scanf("%s", &nome);
    printf("inserire il sesso (M o F)");
    scanf("%s", &sesso);
    if(sesso=='M')
        printf("Egregio signor");
    else
        printf("Gentilissima signora");
    return 0;
}
