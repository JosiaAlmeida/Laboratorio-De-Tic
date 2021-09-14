#include<stdio.h>

int main(){
    int num;
    int Acomulador = 1;
    printf("Digite um valor superior ou igual a 100: ");
    scanf("%d", &num);
    int cont = num;
    while (Acomulador != num)
    {
        if(Acomulador<=num){
            Acomulador *= cont;
            cont--;
        }
    }
    
    for(int i=Acomulador; i>0;i--) {
        if(Acomulador==num){
            if(i==Acomulador)printf("%d", i);
            else printf("*%d",i);
        }
    }

    if(Acomulador==num) printf("\nTotal %d",Acomulador);

    printf("\n");
    return 0;
}