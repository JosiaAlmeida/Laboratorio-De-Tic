#include<stdio.h>

int main(){

    float width, area= 0;

    printf("Digite a largura: ");
    scanf("%f", &width);
    area = width*width;
    printf("Area do quadrado = %.1f\n", area);

    return 0;
}