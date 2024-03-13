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
        digito = bin % 10; // calcula o último dígito do número binário
        dec = dec + (digito * pot); //adiciona o valor do dígito binário multiplicado pela potência de 2 correta
        pot = pot * 2; // atualiza a potencia
        bin = bin / 10; // atualiza a binario
    }

    printf(" em decimal é: %d\n", dec);

    return 0;
}
