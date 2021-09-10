#include <stdio.h>

int main(){
    int AnoActual, AnoNascido, idade, idade2050;
    printf("Digite Ano Actual e em seguida o ano nascido: ");
    scanf("%d%d", &AnoActual, &AnoNascido);
    idade = AnoActual - AnoNascido;
    idade2050 = 2050 - AnoNascido;
    printf("Idade %d e em 2050 tera %d \n", idade, idade2050);
    return 0;
}
