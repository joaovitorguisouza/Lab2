/**
* Arquivo: dist.c
* Autor: Joao Vitor Guimaraes de Souza
* Matrícula: 12111EBI030
* Criado em: 24/11/2022
*/

#include <stdio.h>
#include <math.h>

int main(void) {
    float xA, yA, xB, yB;

    scanf("%f %f", &xA, &yA);
    scanf("%f %f", &xB, &yB);
    
    //float dx = pow(xA - xB, 2);
    //float dy = pow(yA - yB, 2);
    
    float dE = sqrt(pow(xA - xB, 2) + pow(yA - yB, 2));
    printf("Distancia = %g\n", dE);

    return 0;
}