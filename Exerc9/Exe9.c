#include <stdio.h>

int main()
{
    float racaoKilo, racaoGrama;

    printf("Quantidade em Kilo comprada: ");
    scanf("%f", &racaoKilo);

    printf("Consumo diario total em gramas para os dois gatos: ");
    scanf("%f", &racaoGrama);

    racaoKilo *= 1000;
    float Consumo5day = racaoGrama * 5;

    if (Consumo5day >= racaoKilo)
        printf("Não restou racao depois de 5 dias\n");
    else
    {

        float consumoFinal = racaoKilo - Consumo5day;

        printf(" %.2f kilos\n", racaoKilo);

        if (consumoFinal >= 1000)
        {
            consumoFinal /= 1000;
            printf("Depois de 5 dias sobrará %.2f kilos\n", consumoFinal);
        }
        else
        {
            consumoFinal /= 1000;
            printf("Depois de 5 dias sobrará %.2f gramas \n", consumoFinal);
        }
    }
    return 0;
}