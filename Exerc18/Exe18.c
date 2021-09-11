#include<stdio.h>

int main(){
    int day[30];
    float precoPago[30], TotalGanhoDoHotel;

    for(int i=0; i<5; i++){
        printf("Digite o total de dias: ");
        scanf("%d",&day[i]);
        if(day[i]<15){
            precoPago[i] = (50+4)*day[i];
            TotalGanhoDoHotel += precoPago[i];
        }
        if(day[i]==15){
            precoPago[i] = (50+3.60)*day[i];
            TotalGanhoDoHotel += precoPago[i];
        }
        if(day[i]>15){
            precoPago[i] = (50+3)*day[i];
            TotalGanhoDoHotel += precoPago[i];
        }
    }

    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Quarto numero %d\n", i+1);
        printf("Preco a pagar: %.2f\n",precoPago[i]);
    }

    printf("Total a ser pago %.2f\n",TotalGanhoDoHotel);
    printf("\n");
    return 0;
}