#include<stdio.h>

int main(){
    int num1=1, num2=0, sum=0, x;

    printf("Quantidade: ");
    scanf("%d", &x);

    for (int i = 0; i < x; i++)
    {
        sum = num1 + num2;
        if(i==0) printf("%i", num2);
        else printf(" + %i", num2);
        num1 = num2 ;
        num2 = sum;
    }
    

    printf("\n");
    return 0;
}