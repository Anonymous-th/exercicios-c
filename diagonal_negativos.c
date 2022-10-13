#include <stdio.h>
    int main(){
        int n, cont;
        printf("Qual a ordem da matriz :");
        scanf("%d",&n);

        int mat[n][n];

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                printf("Elemento [ %d,%d]: ", i,j);
                scanf("%d", &mat[i][j]);
            }
        }
        printf("Diagonal Principal\n");
        for(int i = 0; i < n; i++){
            printf("%d ", mat[i][i]);
        }
        cont = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(mat[i][j] < 0){
                    cont++;
                }
            }
        }
        printf("\nQuantidade de negativos = %d\n",cont);

        return 0;
    }