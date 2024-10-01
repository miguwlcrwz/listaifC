#include <stdio.h>
#include <math.h>

/*20) Faça um programa que pergunte ao usuário as coordenadas x e y de um ponto. Mostre a distância
deste ponto ao centro (0,0) e o número de seu quadrante (1,2,3 ou 4)*/

int main (void){
    float x,y;
    printf("qual a cordenada x? ");
    scanf("%f",&x);
    printf("qual a cordenada y? ");
    scanf("%f",&y);
    // calcular distância 
    float distancia = sqrt (pow(x,2) + pow(y,2));
    printf("a distãncia do ponto ao centro é: %.2f",distancia);
    // encontrar o quadrante 
    if (x > 0 && y > 0){
        printf("\no ponto está no primeiro quadrante");
    } 
    else if (x < 0 && y > 0){ 
        printf("\nestá no segundo quadrante");
    } 
    else if (x < 0 && y < 0){
        printf("\no ponto está no terceiro quadrante");
    } 
    else if (x > 0 && y < 0){
        printf("\no ponto está no quarto quadrante");
    } 
    else {
        printf("\no ponto está sobre um dos eixos");
    }
    return 0;
}