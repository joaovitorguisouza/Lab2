/**
* Arquivo: areaTriRet.c
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

    float xC = xB, yC = yA;
    
    float dAC = sqrt(pow(xA - xC, 2) + pow(yA - yC, 2));
    float dBC = sqrt(pow(xC - xB, 2) + pow(yC - yB, 2));
    
    float area = ((dAC*dBC)/2);
    printf("Area = %g\n", area);

    return 0;
}