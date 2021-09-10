#include<stdio.h>

int main(){
    float salarioMinimo, Salario, TotalSalarioMinimo = 0;
    printf("Salario minimo: ");
    scanf("%f", &salarioMinimo);
    printf("Salario: ");
    scanf("%f",&Salario);
    TotalSalarioMinimo = Salario/salarioMinimo;
    printf("Total de Salario Minimo: %f \n", TotalSalarioMinimo);
    return 0;
}