/**
* Arquivo: divisores.c
* Autor: Joao Vitor Guimaraes de Souza
* Matrícula: 12111EBI030
* Criado em: 24/11/2022
*/

#include <stdio.h>
#include <math.h>

int main(void) {
    int n, inicio;

    scanf("%d", &n);

    for (inicio = 1; inicio <= n; inicio++){
        if (n % inicio == 0){
            printf("%d, ", inicio);
        }
    }
    
    return 0;
}