/**
* Arquivo: impares.c
* Autor: Joao Vitor Guimaraes de Souza
* Matrícula: 12111EBI030
* Criado em: 24/11/2022
*/

#include <stdio.h>
#include <math.h>

int main(void) {
    int menor, maior, inicio;

    scanf("%d %d", &menor, &maior);
    for (inicio = menor; inicio <= maior; inicio++) {
        if (inicio % 2 == 0) {
            printf("%d\n, ", inicio);
        }
    }

    

    return 0;
}