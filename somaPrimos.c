/**
* Arquivo: somaPrimos.c
* Autor: Joao Vitor Guimaraes de Souza
* Matrícula: 12111EBI030
* Criado em: 24/11/2022
*/

#include <stdio.h>
#include <math.h>

int main(void) {
    int menor, maior, inicio1, inicio2, soma, contador;
    
    scanf("%d %d", &menor, &maior);

    for (soma = 0, inicio1 = menor; inicio1 <= maior; inicio1++){
        for (contador = 0, inicio2 = 1; inicio2 <= inicio1; inicio2++){
            if(inicio1 % inicio2 == 0){
                contador = contador + 1;
            }
        }
        if (contador == 2){
            soma = soma + inicio1;
        }
    }
    printf("%d", soma);
    
    return 0;
}