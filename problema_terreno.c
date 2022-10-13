#include <stdio.h>

int main (){
    double largura, comprimento, area, valor , metro;

    printf("Digite a largura do Terreno :");
    scanf("%lf", &largura);

    printf("Digite o comprimento do Terreno :");
    scanf("%lf", &comprimento);

    printf("Digite o valor do metro quadrado :");
    scanf("%lf", &metro);

    area = largura * comprimento;
    valor = area * metro;

    printf("Area do Terreno = %.2lf\n", area);
    printf("Preço do Terreno = %.2lf\n", valor); 

    return 0;

}