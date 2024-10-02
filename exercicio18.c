#include <stdio.h>
#include <math.h>

/*18) Um brinquedo de um parque precisa controlar a entrada. Menores de idade, com mais de 1,50m
podem entrar mas os com altura menor que 1,50 estão proibidos. Os maiores de idade podem
entrar. Para os de terceira idade é bom alertar para os perigos da velocidade! Faça um programa que
pergunte a idade de uma pessoa e exiba, a mensagem adequada, isto é, &quot;pode entrar&quot;, &quot;não pode
entrar&quot;, &quot;cuidado com a velocidade&quot;. Lembre-se que os menores de idade (apenas eles) devem
informar, também, sua altura.*/

int main (void){
    int idade;
    float altura;
    printf("quantos anos você tem? ");
    scanf("%d",&idade);
    printf("qual a sua altura? em centímetros");
    scanf("%f",&altura);
    if (idade < 18 && altura < 150.0){
        printf("você não pode andar nesse brinquedo");
    } 
    if (idade >= 18 || (idade < 18 && altura > 150.0)){  
        printf("pode entrar!!\n");
    }
    if (idade > 65){
        printf("cuidado com a velocidade!!");
    }
    return 0;
}