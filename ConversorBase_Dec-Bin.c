/***********************************************************************************
FATEC Franco da Rocha 
Gestão de Sistemas Operacionais
Grupo: Gabriel Tiggi Leite Lima, Giovanni Santos Martins e Nayara de Oliveira Brabo
************************************************************************************/
                // CONVERSÃO DE NÚMERO DECIMAL PARA BINÁRIO

#include <stdio.h>

int main() {
    int dec, resto, bin = 0, mult = 1;

    printf("DIGITE UM NÚMERO DECIMAL: ");
    scanf("%d", &dec);
    
    printf("\nO número %d", dec);

    while (dec != 0) {
        resto = dec % 2; // 
        bin = bin + (resto * mult);
        mult = mult * 10;
        dec = dec/2;
    }

    printf(" em decimal é: %d\n", bin);

    return 0;
}