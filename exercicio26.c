#include <stdio.h>
#include <math.h>

/*26) Construa um programa que ajude um menino a decidir como deve comprar o presente de sua
namorada. O apaixonado deve informar quanto tem na carteira (“valor em caixa”) e o valor do
presente. Caso o preço do presente seja superior a 80% do valor em caixa, a compra deve ser feita a
prazo (5x), com juros de 10% sobre o valor do presente. Caso o presente custe entre 50% e 79% do
valor em caixa, a compra deve ser feita a prazo (3x), com juros de 8% sobre o valor do presente. Caso
contrário, a compra deverá ser realizada a vista, onde o apaixonado receberá 5% de desconto.
Apresentar a forma de pagamento escolhida e o valor a ser pago (total a vista ou total a prazo),
dependendo da escolha realizada pelo programa.*/

int main (void){
    float carteira,presente;
    printf("quanto você tem na carteira?");
    scanf("%f",&carteira);
    printf("quanto custa o presente?");
    scanf("%f",&presente);
    if (presente > (0.8 * carteira)){
        // os juros já vão estar incluidos na parcela = jurosP
        float jurosP = (((presente * 0.1) + presente) / 5);
        printf("o valor será pago em 5x de %.2f, com juros",jurosP);
    } 
    else if (presente >= carteira * 0.50 && presente <= carteira * 0.79){
        float juros2 = (((presente * 0.08) + presente) / 3);
        printf("o valor será pago em 3x de %.2f",juros2);
    } 
    else {
        float desconto = presente - (presente *0.05);
        printf("o valor será pago a vista %.2f com o desconto já aplicados",desconto);
    }
    return 0;
}