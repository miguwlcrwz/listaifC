#include <stdio.h>
#include <math.h>

/*30) Um plano de saúde cobra as seguintes mensalidades:
o Até 10 anos: R$ 30,00
o Acima de 10 até 29 anos: R$ 60,00
o Acima de 29 até 45 anos: R$ 120,00
o Acima de 45 até 59 anos: R$ 150,00
o Acima de 59 até 65 anos: R$ 250,00
o Maior que 65 anos: R$ 400,00
Para as pessoas fumantes, com mais de 29 anos, é cobrada uma taxa extra de R$30,00
Escreva um programa em C que pergunte a idade de uma pessoa e exiba o valor que ela deverá
pagar. A pergunta sobre ser fumante só deve ser realizada quando necessária.*/

int main (void){
    int idade,fuma;
    float valor;
    printf("qual a sua idade? ");
    scanf("%d",&idade);
    if (idade <= 10){
        valor = 30;
    }
    else if (idade > 10 && idade <= 29){ 
        valor = 60;
    }
    else if (idade > 29 && idade <= 45){
        valor = 120;
    }
    else if (idade > 45 && idade <= 59){
        valor = 150;
    }
    else if (idade > 59 && idade <= 65){
        valor = 250;
    }
    else {
        valor = 400;
    }

    if (idade > 29){
        printf("você fuma? (1) SIM (2) NÃO ");
        scanf("%d",&fuma);
        if (fuma == 1 ){ 
        valor =  valor + 30;}
    }
    printf("o valor do seu plano será de R$%.2f",valor);
    return 0;
}