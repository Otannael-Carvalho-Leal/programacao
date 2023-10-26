#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main() {
    float preco, precoInflacionado;

    
    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    
    if (preco < 100) {
        
        precoInflacionado = preco * 1.10;
    } else {
        
        precoInflacionado = preco * 1.20;
    }


    printf("Valor original: R$ %.2f\n", preco);
    printf("Valor inflacionado: R$ %.2f\n", precoInflacionado);

    return 0;
}

