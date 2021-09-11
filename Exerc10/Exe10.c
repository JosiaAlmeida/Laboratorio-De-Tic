#include<stdio.h>

int main(){
    float minimumWage, TotalQuilowalt;
    int quantQuilowalt;

    printf("Seu salario minimo: ");
    scanf("%f", &minimumWage);

    printf("Digite a quantidade consumida de quilowaltts: ");
    scanf("%d", &quantQuilowalt);
    
    float valorQuilowaltt = minimumWage/5;
    
    float valorPago = quantQuilowalt*valorQuilowaltt;

    float desconto = valorPago-((valorPago/100)*15);

    printf("Valor de quilowaltts: %.2f\n", valorQuilowaltt);

    printf("Valor a ser pago: %.2f\n", valorPago);

    printf("Valor a ser pago com desconto: %.2f \n", desconto);

    return 0;
}