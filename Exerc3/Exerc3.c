#include<stdio.h>

int main(){
    int salarioMinimo, Salario, TotalSalarioMinimo = 0;
    printf("Salario minimo: ");
    scanf("%d", &salarioMinimo);
    printf("Salario: ");
    scanf("%d",&Salario);
    TotalSalarioMinimo = Salario/salarioMinimo;
    printf("Total de Salario Minimo: %d \n", TotalSalarioMinimo);
    return 0;
}