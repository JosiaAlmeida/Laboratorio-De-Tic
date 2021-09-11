#include<stdio.h>

int main(){
    float hourValue, minimumWage, grossSalary, totalHours, tax, newSalary;

    printf("Digite o Salario minimo: ");
    scanf("%f", &minimumWage);

    printf("Digite o total de horas trabalhada: ");
    scanf("%f", &totalHours);

    hourValue = minimumWage/5;

    grossSalary = totalHours* hourValue;

    tax = (grossSalary/100) * 3;

    newSalary = grossSalary - tax;

    printf("Valor da hora %.2f\n", hourValue);
    
    printf("Salario bruto %.2f\n", grossSalary);
    
    printf("Imposto aplicado %.2f\n", tax);

    printf("Novo salario %.2f\n", newSalary);

    return 0;
}