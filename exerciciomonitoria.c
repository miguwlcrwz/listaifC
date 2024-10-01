#include <stdio.h> 

/*Crie um programa em C/C++ que leia a temperatura corporal de uma pessoa e o
tempo (em dias) que ela está com febre. O programa deve classificar a condição da
pessoa e sugerir um tratamento, com base nas seguintes regras:

Temperatura Normal: Temperatura menor que 37.5°C.
Tratamento: "Nenhum tratamento necessário."

Febre Leve: Temperatura entre 37.5°C e 38.5°C, e a pessoa está com febre há 1 ou
2 dias.
Tratamento: "Mantenha-se hidratado e descanse."

Febre Alta: Temperatura maior que 38.5°C ou a pessoa está com febre há mais de 2
dias.
Tratamento: "Consulte um médico e monitore a temperatura."
*/

 int main (void){
    float temperatura;
    int dias;
    printf("qual a sua temperatura? ");
    scanf("%f",&temperatura);
    printf("está a quantos dias?");
    scanf("%d",&dias);
    if (temperatura < 37.5){
        printf("nenhum tratamento necessário");
    }
    else if (temperatura < 38.5 && (dias <= 2 && dias >= 1) ){ 
         printf("mantenha-se hidratado e descanse");
    } else { 
        printf("consulte um médico e monitore a temperatura");
    }
    return 0;
}