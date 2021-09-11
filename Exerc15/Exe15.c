#include<stdio.h>

int main(){
    int num, cont=0;
    do
    {
        printf("Digite um valor: ");
        scanf("%d", &num);

        if(num> -1 )printf("\nSucessor %d \n", num+1);
        cont++;
    } while (num>-1);

    printf("\n");
    return 0;
}