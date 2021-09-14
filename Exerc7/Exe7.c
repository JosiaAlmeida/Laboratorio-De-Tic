#include <stdio.h>

int main()
{
    float precoFabrica, Lucro, imposto, precoFabrica_final;
    int percentagemLucro, percentagemImposto;

    printf("Digite o lucro, imposto e o seu preço ");
    scanf("%d%d%f", &percentagemLucro, &percentagemImposto, &precoFabrica);

    Lucro = (precoFabrica * percentagemLucro / 100);
    imposto = (precoFabrica * percentagemImposto / 100);

    precoFabrica_final = (precoFabrica + Lucro - imposto);

    printf("o preco final do veiculo e %.2f kz\n", precoFabrica_final);
    printf("\n");
    return 0;
}