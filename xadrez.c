#include <stdio.h>

int main() {

int torre =  0;
int bispo = 1;
int rainha = 0;

printf("Movimentando a Torre\n");

for (int i = 0; i < 5; i++) {
    torre++;
    printf("Direita: %d\n", torre);
}

    printf("Movimentando o Bispo\n");

do
{
    printf("Cima, Direita : %d\n", bispo);
    bispo++;
} while (bispo <= 5);

    printf("Movimentando a Rainha\n");

while (rainha <= 8)
    {
    printf("Esquerda : %d\n", rainha);
        rainha++;
    }

    return 0;

}