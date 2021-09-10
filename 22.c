#include <stdio.h>
int main()
{
    char O;
    int i,l,auxColuna,inicio;
    float M[12][12], soma=0,media;
    scanf("%c",&O);
    for (i=0; i<12; i++)
    {
        for (l=0; l<12; l++)
        {
            scanf("%f",&M[i][l]);
        }
    }
    auxColuna=11;
    inicio=1;
    for (i=0; i<5; i++)
    {
        for (l=inicio; l<auxColuna; l++)
        {
            soma=soma+M[i][l];
        }
        auxColuna--;
        inicio++;
    }
    if (O=='S')
    {
        printf("%.1f\n",soma);
    }
    if (O=='M')
    {
        media=soma/30;
        printf("%.1f\n",media);
    }
    return 0;
}
