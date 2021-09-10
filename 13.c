#include <stdio.h>


int main(void)
{
    int n,i,valor,total=0,rato=0,coelho=0,sapo=0;
    char tipo;
    printf("");
    scanf("%d",&n);

    for (i=1; i<=n; i++)
    {
        printf("");
        scanf("%d",&valor);
        total=total+valor;
        printf("");
        setbuf(stdin, NULL);
        scanf("%c",&tipo);
        if (tipo=='C')
        {
            coelho=coelho+valor;
        }
        if (tipo=='S')
        {
            sapo=sapo+valor;
        }
        if (tipo=='R')
        {
            rato=rato+valor;
        }
    }
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",coelho);
    printf("Total de ratos: %d\n",rato);
    printf("Total de sapos: %d\n",sapo);
    printf("Percentual de coelhos: %.2f %%\n",((float)coelho/total)*100);
    printf("Percentual de ratos: %.2f %%\n",100*((float)rato/total));
    printf("Percentual de sapos: %.2f %%\n",100*((float)sapo/total));




    return 0;
}
