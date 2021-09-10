#include <stdio.h>


int main(void)
{
    char O;
    scanf("%c",&O);
    float M[12][12],soma=0,media=0;
    int linha,coluna,cont=0;
    for (linha=0; linha<12; linha++)
    {
        for (coluna=0; coluna<12; coluna++)
        {
            scanf("%f",&M[linha][coluna]);
            if (coluna>linha)
            {
                soma=soma+M[linha][coluna];
                cont++;
            }
        }
    }
    if (O='S')
    {
        printf("%.1f\n",soma);
    }
    if (O=='M')
    {
        media=soma/cont;
        printf("%.1f\n",media);
    }




    return 0;
}
