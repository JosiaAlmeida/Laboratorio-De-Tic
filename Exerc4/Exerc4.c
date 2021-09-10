#include<stdio.h>

int main(){
    float Salario, NovoSalario = 0;
    printf("Seu Salario: ");
    scanf("%f", &Salario);
    float Aux = (Salario/100) * 25;
    NovoSalario = Aux + Salario;
    printf("Novo salario: %.2f \n", NovoSalario);
    return 0;
}