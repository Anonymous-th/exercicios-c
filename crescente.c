#include <stdio.h>

    int main(){

        int x, y;

        printf("Digite dois numeros :");
        scanf("%d",&x);
        scanf("%d",&y);

        while (x != y){ //monta estrutura de repetição 
            if (x < y){ //nao vamos entrar com a saida/entrada de dados agora, pois precisamos testar primeiro os primeiro números digitado acima, monta o if e depois a estrutura de repetição
            printf("Crescente!\n"); 
            }
            else{
            printf("DECRESCENTE!\n");
           }
            printf("Digite outros dois numeros:\n");
            scanf("%d",&x);
            scanf("%d",&y);
        }
       return 0;     
    }