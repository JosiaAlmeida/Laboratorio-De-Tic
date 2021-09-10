#include<stdio.h>

int main(){
    float Salario, NovoSalario = 0, Percentagem;
    printf("Seu Salario: ");
    scanf("%f", &Salario);
    printf("Sua Percentagem: ");
    scanf("%f", &Percentagem);
    float Aux = (Salario/100) * Percentagem;
    NovoSalario = Aux + Salario;
    printf("Novo salario: %.2f \n", NovoSalario);
    return 0;
}