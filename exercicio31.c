#include <stdio.h>
#include <math.h>

/*31) *Criar um programa em C que a partir da idade e peso do paciente calcule a dosagem de um
medicamento e exiba a receita informando quantas gotas do medicamento o paciente deve tomar por
dose. Considere que o medicamento em questão possui 500 mg por ml, e que cada ml corresponde a
20 gotas.) Adultos
a ou adolescentes desde 12 anos, inclusive, se tiverem peso igual ou acima de 60 Kg
devem tomar 1000 mg; com peso abaixo de 60 Kg devem tomar 875 mg;
b) Para crianças e adolescentes abaixo de 12 anos a dosagem é calculada pelo peso corpóreo
conforme a tabela a seguir:
o De 5 Kg a 9 Kg: 125 mg
o 9.1 Kg a 16 Kg: 250 mg
o 16.1 Kg a 24 Kg: 375 mg
o 24.1 Kg a 30 Kg: 500 mg
o Acima de 30 Kg: 750 mg*/

int main (void){
    int idade, dosagem, gotas;
    float peso;
    printf("qual o seu peso? ");
    scanf("%f",&peso);
    printf("qual sua idade? ");
    scanf("%d",&idade);

    if (idade >= 12) {
        if (peso >= 60.0) {
            dosagem = 1000;
        } else {
            dosagem = 875;
        }
    } else {
        if (peso >= 5 && peso <= 9) {
            dosagem = 125;
        } else if (peso > 9 && peso <= 16) {
            dosagem = 250;
        } else if (peso > 16 && peso <= 24) {
            dosagem = 375;
        } else if (peso >= 24 && peso < 30) {
            dosagem = 500;
        } else {
            dosagem = 750;
        }
    }

    gotas = (dosagem / 500) * 20;
    printf("\nreceita: ");
    printf("\nsua dosagem é: %d gotas",gotas);
    return 0;
}