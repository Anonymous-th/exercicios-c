#include <stdio.h>

    int main(){
        int n, vetor[10];

        printf("Quantos Numeros voce vai digitar :");
        scanf("%d", &n);

        for(int i = 0; i < n; i++){
            printf("Digite um numero");
            scanf("%d", &vetor[i]);
        }
        for(int i = 0; i < n;i++){
            if(vetor[i] <= 0 ){
                printf("numeros negativos : %d\n",vetor[i]);
            }
        }
        return 0;
    }