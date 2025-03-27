#include <stdio.h>

int main() {

int torre =  0;
int bispo = 1;
int rainha = 1;
int cavalo;


    printf("\n");
    printf("Movimentando a Torre\n");
    printf("\n");

for (int i = 0; i < 5; i++) {
    torre++;
    printf("Direita \n", torre);
}

    printf("\n");
    printf("Movimentando o Bispo\n");
    printf("\n");

do
{
    printf("Cima, Direita \n", bispo);
    bispo++;
} while (bispo <= 5);


    printf("\n");
    printf("Movimentando a Rainha\n");
    printf("\n");


while (rainha <= 8)
    {
    printf("Esquerda \n", rainha);
        rainha++;
    }


    printf("\n");
    printf("Movimentando o Cavalo\n");
    printf("\n");


    for(cavalo = 1; cavalo <= 2; cavalo++)
    {

        for (cavalo = 1; cavalo <= 2; cavalo++)
        {
            printf("Baixo \n", cavalo);
           
            
        }
        printf("Esquerda \n");
        printf("\n");
    }


    return 0;

}