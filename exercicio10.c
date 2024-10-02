#include <stdio.h>
#include <math.h>

/*10) Escreva um programa que calcule e exiba o preço de venda do m 2 de um imóvel. A construtora
informará, via teclado, o valor total gasto com material (gm), o tempo (em horas) de duração da
construção (tc), o custo (por hora) da mão de obra (cmo) e a metragem da área construída (ac). Há
um acréscimo de 30% no custo de mão de obra sempre que a razão entre a área construída e o
tempo de construção for inferior a 0,035.
O custo total da obra (ct) é calculado pela seguinte equação:
ct = gm + cmo * tc
Por último, a construtora irá somar ao custo total da obra (ct) a sua margem de lucro, obtendo,
assim, o preço de venda do imóvel. O cálculo da margem de lucro é descrito a seguir. .
Seja r a razão entre o valor gasto com o material (gm) e o custo total de mão de obra (cmo * tc). A
margem de lucro será de
a) 5% sobre o gasto com o material (gm), se r &gt; 1,5;
b) 8% sobre o custo total da obra (ct), se 0,5 &lt;= r &lt;= 1,5
10% sobre o custo total de mão de obra (cmo * tc), se r &lt; 0,5*/

int main (void){
    float valorMaterial, tempoConstrucao, custoMaoObra, areaConstruida, custoTotal, precoVenda, lucro, custoMaoObraAjustado, margemLucro;
    printf("qual o valor total gasto com o material? ");
    scanf("%f",&valorMaterial);
    printf("quanto tempo durou a construção? (em horas)");
    scanf("%f",&tempoConstrucao);
    printf("qual o custo por hora da mão de obra? ");
    scanf("%f",&custoMaoObra);
    printf("quantos metros tem a obra? ");
    scanf("%f",&areaConstruida);
    // cálculo do acréscimo de 30% no custo de mão de obra
    if ((areaConstruida / tempoConstrucao) < 0.035){
        custoMaoObraAjustado = ((0.3 * custoMaoObra) + custoMaoObra) * tempoConstrucao;
    } else {
        custoMaoObraAjustado = custoMaoObra * tempoConstrucao;
    }
    // cálculo do custo total da obra
    custoTotal = valorMaterial + custoMaoObraAjustado;
    // cálculo da margem de lucro
    lucro = valorMaterial / (custoMaoObra * tempoConstrucao);
    if (lucro > 1.5){
        margemLucro = valorMaterial * 0.05;
    } else if (0.5 <= lucro && lucro <= 1.5){
        margemLucro = custoTotal * 0.08;
    } else {
        margemLucro = custoMaoObraAjustado * 0.1;
    }
    // cálculo do preço de venda do metro quadrado
    precoVenda = (custoTotal + margemLucro) / areaConstruida;
    // exibição do resultado
    printf("O preço da venda por metro quadrado é: %.2f",precoVenda);
    return 0;
}