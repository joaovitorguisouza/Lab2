/**
* Arquivo: dist.c
* Autor: Joao Vitor Guimaraes de Souza
* Matrícula: 12111EBI030
* Criado em: 03/11/2022
*/

#include <stdio.h>
#include <math.h>

int main(void) {
    double xA, yA, xB, yB;

    scanf("%f %f", &xA, &yA);
    scanf("%f %f", &xB, &yB);

    double dx = xA - xB;
    double dy = yA - yB;
    double dE = sqrt(dx + dy);
    printf("Distância = %d\n", dE);

    return 0;
}