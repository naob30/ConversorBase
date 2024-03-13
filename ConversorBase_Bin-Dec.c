/***********************************************************************************
FATEC Franco da Rocha 
Gestão de Sistemas Operacionais
Grupo: Gabriel Tiggi Leite Lima, Giovanni Santos Martins e Nayara de Oliveira Brabo
************************************************************************************/
                // CONVERSÃO DE NÚMERO BINÁRIO PARA DECIMAL

#include <stdio.h>

int main() {
    int bin, dec = 0, digito, pot = 1;

    printf("DIGITE UM NÚMERO BINÁRIO: ");
    scanf("%d", &bin);
    
    printf("\nO número %d", bin);

    while (bin != 0) {
        digito = bin % 10; 
        dec = dec + (digito * pot); 
        pot = pot * 2; 
        bin = bin / 10; 
    }

    printf(" em decimal é: %d\n", dec);

    return 0;
}
