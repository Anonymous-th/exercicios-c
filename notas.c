#include <stdio.h>

int main(){

    float nota1, nota2, soma;

    printf("Digite a primeira nota :");
    scanf("%f", &nota1);

    printf("Digite a segunda nota :");
    scanf("%f",&nota2);

    soma = (nota1 + nota2);

    printf("Nota Final = %.1f\n", soma);

        if(soma > 60.0){
           printf("Aprovado\n"); 
        }
        else{
            printf("Reprovado");
        }

    return 0;
}