#include <stdio.h>
#include <math.h>

    int main(){

        double media;
        int idade1, idade2;
        char nome1[50], nome2[50];
        //sempre lembrar de usar gets para texto maior de 1 caractere, e scanf somente para texto de 1 caracteres
        printf("Dados da primeira pessoa :\n");
        printf("Nome :");
        //aqui nao usei o fseek porque e a primeira entrada de dados, sendo assim esta limpa por padrao.
        gets(nome1);
        printf("Idade :");
        fseek(stdin, 0, SEEK_END);
        scanf("%d", &idade1);

        printf("Dados da segunda pessoa :\n");
        printf("Nome :");
        // ja na segunda entrada e preciso utilizar
        fseek(stdin, 0, SEEK_END);
        gets(nome2);
        printf("Idade :");
        scanf("%d", &idade2);
        //aqui podemos fazer o casting, ou formatar o 2 por 2.0, assim atribui o valor de int para double     
        media = ((double)idade1 + idade2) / 2;
        //abaixo podemos formatar o texto na sequencia de placeholder, e depois as variaveis na mesma sequencia//
        printf("A idade media de %s e %s eh de %.1lf anos", nome1, nome2, media);
        

        return 0;
    }