#include <stdio.h>

    int main(){
        int cont, soma, idade;
        double media;

            printf("Digite as idades :\n");
            scanf("%d",&idade);

            cont = 0;
            soma = 0;

            while(idade >= 0){
                soma = soma + idade;
                cont = cont + 1;
                scanf("%d",&idade);
            }
            if(cont == 0){
                printf("Impossivel de calcular");
            }
            else{
                media = (double)soma / cont;
                printf("Media =%.2lf\n", media);
            }
      return 0;
    }