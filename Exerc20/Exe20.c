#include<stdio.h>

int main(){
    int ano=0;
    float heigthJuca = 1.10, heigthChico =1.50;

    while (heigthJuca < heigthChico)
    {
        heigthChico+=0.02;
        heigthJuca+=0.03;
        ano++;
    }
    

    printf("O Juca precisa de %d anos para passar o Chico", ano);
    printf("\n");
    return 0;
}