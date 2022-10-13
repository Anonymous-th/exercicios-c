#include <stdio.h>
#include <string.h>

int main()
{

    double c,f;
    char resp;

    do{ //aqui inicia o repita ate 
        printf("Digite a temperatura em celsius:");
        scanf("%lf",&c);
        f= 9.0 * c / 5.0 + 32.0;
        printf("Equivalente em fahrenheit : %.1lf \n",f);
        printf("Deseja repetir (s/n)?");
        fseek(stdin, 0, SEEK_END);
        scanf("%c", &resp);
    } while (resp == 's'); // e aqui termina, juntamente com a condicao.            


    return 0;
}