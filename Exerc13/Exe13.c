#include<stdio.h>

int main(){
    float somaImpar = 0, contImpar =0, medImpar=0;
    for (int i = 0; i < 500; i++)
    {
        if(i%2!=0 && i%3==0){
            somaImpar+=i;
            contImpar++;
        }
    }
    medImpar = somaImpar/contImpar;
    printf("Media impar: %.2f", medImpar);
    printf("\n");
    return 0;
}