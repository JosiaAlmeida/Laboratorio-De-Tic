#include<stdio.h>

int main(){
    int num;
    int Acomulador = 1, cont =1;
    printf("Digite um valor superior ou igual a 100: ");
    scanf("%d", &num);

    while (Acomulador != num)
    {
        if(Acomulador<=num){
            Acomulador *= cont;
            cont++;
        }
        else {
            printf("Esse numero excede o seu limite\n");
            break;
        }
    }
    
    for(int i=cont-1; i>0;i--) {
        if(Acomulador==num){
            if(i==cont-1)printf("%d", i);
            else printf("*%d",i);
        }
    }

    if(Acomulador==num) printf("\nTotal %d",Acomulador);

    printf("\n");
    return 0;
}