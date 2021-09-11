#include<stdio.h>
#include<math.h>
int main(){
    float a, b, c;

    printf("Digite os valores de A B e C: ");
    scanf("%f%f%f", &a,&b,&c);
    
    float delta = pow(b,2) - 4*a*c;

    float raizq = sqrt(delta*-1);
    float x1 = (b - (raizq*-1))/2*a;
    float x2 = (b + (raizq*-1))/2*a;

    if(a == 0 || b==0 || c==0)
        printf("Sem Raiz\n");
    else if(delta==0)
        printf("Sem raiz\n");
    else
        printf("Raiz 1: %.2f e Raiz 2: %.2f\n", x1, x2);
    return 0;
}