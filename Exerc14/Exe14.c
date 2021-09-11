#include<stdio.h>

int main(){
    float somapar =0, contpar =0, somaImpar = 0, contImpar =0, medPar=0, medImpar=0;
    for (int i = 0; i < 10; i++)
    {
        if(i%2==0){
            somapar+=i;
            contpar++;
        }
        else{
            somaImpar+=i;
            contImpar++;
        }
    }
    medPar = somapar/contpar;
    medImpar = somaImpar/contImpar;
    printf("Media de Par: %.2f\nMedia impar: %.2f", medPar, medImpar);
    printf("\n");
    return 0;
}