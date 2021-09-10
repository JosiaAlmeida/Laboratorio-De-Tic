#include<stdio.h>

int main(){
    int Expectativa, PrecoConvite, VendasNecessaria;
    printf("Sua Expectativa: ");
    scanf("%d", &Expectativa);
    printf("Seu Preco do convite: ");
    scanf("%d", &PrecoConvite);
    VendasNecessaria = Expectativa / PrecoConvite;
    printf("Será necessario a venda de: %d convites \n", VendasNecessaria);
    return 0;
}