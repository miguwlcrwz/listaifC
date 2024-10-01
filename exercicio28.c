#include <stdio.h>
#include <math.h>

/*28) Faça um programa para ler três valores reais e informar se estes podem ou não formar os lados de
um triângulo (nenhum lado pode ser maior que a soma dos outros dois). Em caso afirmativo, exiba
o tipo de triângulo (equilátero, isósceles ou escaleno). Sendo que:
− Triângulo Equilátero: possui os 3 lados iguais.
− Triângulo Isóscele: possui 2 lados iguais.
− Triângulo Escaleno: possui 3 lados diferentes.*/

int main (void){
    float a,b,c;
    printf("digite o primeiro valor real: ");
    scanf("%f",&a);
    printf("digite o segundo valor real: ");
    scanf("%f",&b);
    printf("digite o terceiro valor real: ");
    scanf("%f",&c);
    if((a + b)> c && (a + c) > b && (b + c) > a){
    if ((a == b) && (b == c)){
        printf("é um triângulo equilátero");
    }
    else if ((a == b) || (b == c) || (c == a)){
        printf("é um triângulo isóceles");
    } 
    else{ printf("é um triângulo escaleno");
    }
    }
    else {printf("os valores não podem formar um triângulo");}
    return 0;
}