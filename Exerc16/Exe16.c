#include<stdio.h>

int main(){
    float heigth, menor=0, maior=0;
    for (int i = 0; i < 15; i++)
    {
        printf("Digite sua altura: ");
        scanf("%f", &heigth);

        if(i==0){
            menor = heigth;
            maior = heigth;
        }
        if(menor>heigth) menor =heigth;
        if(maior<heigth) maior = heigth;
    }
    
    printf("Maior altura: %.2f \nMenor altura %.2f",maior, menor);

    printf("\n");
    return 0;
}