#include<stdio.h>

int count(int i) {
    int ret=1;
    while (i/=10) ret++;
    return ret;
}

int main(){
    int value, i=0;
    char * Bool;
    char * BoolConditional = "True";

    printf("Digite um valor com 5 digito: ");
    scanf("%d", &value);

    int dig=count(value);

    if(dig <5) printf("Valor invalido");
    else{
        int Array[dig];

        int Value = value;
        while (value >0) {
            Array[i] = value % 10;
            i++;
            value /= 10;
        }

        int cont = dig;

        for (int i = 0; i < dig; i++)
        {
            if(Array[i]==Array[--cont]){
                printf("%d True\n", Array[i]);
                Bool= "True";
                if(Bool == "False"){
                    BoolConditional= Bool;
                }
            }
            else{
                printf("%d FALSE\n", Array[i]);
                Bool= "False";
                if(Bool == "False"){
                    BoolConditional= Bool;
                }
            }
        }
        if(Bool == BoolConditional && Bool=="True"){
            printf("O valor %d é políndromo\n", Value);
        }else printf("O valor %d não é políndromo\n", Value);

    }
    printf("\n");
    return 0;
}