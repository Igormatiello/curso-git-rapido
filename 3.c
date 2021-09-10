#include <stdio.h>

int main(void)
{
    int testes=0,cobaias=0,sapos=0,s,c,coelhos=0,r,ratos=0,i=0;
    char tipo;
    float percoelhos,perratos,persapos;
    printf("Informe quantos testes foram realizados durante o ano: ");
    scanf("%d",&testes);
    printf("'S' para sapo, 'R' para rato e 'C' para coelho\n");


   for(i=0; i < testes; i++)
       {
           printf("Informe o caractere que indica o cobaia: ");
           scanf("%c",&tipo);
           if (tipo =='S')
           {
                printf("Informe quantos cobaias foram utilizados durante o experimento: ");
                setbuf(stdin,NULL);
                scanf("%d",&s);
                sapos= sapos + s;
                cobaias= cobaias+ s;
           }
           if (tipo =='R')
           {
                printf("Informe quantos cobaias foram utilizados durante o experimento: ");
                setbuf(stdin,NULL);
                scanf("%d",&r);
                ratos= ratos + r;
                cobaias= cobaias+ r;
           }
           if (tipo =='C')
           {
                printf("Informe quantos cobaias foram utilizados durante o experimento: ");
                setbuf(stdin,NULL);
                scanf("%d",&c);
                coelhos= coelhos + c;
                cobaias= cobaias + c;
           }

        }
        printf("Total: %d cobaias\n",cobaias);
        printf("Total de coelhos: %d\n",coelhos);
        printf("Total de ratos: %d\n",ratos);
        printf("Total de sapos: %d\n",sapos);
        percoelhos= (((float)coelhos/cobaias)*100);
        perratos= (((float)ratos/cobaias)*100);
        persapos= (((float)sapos/cobaias)*100);

        printf("Percentual de coelhos: %.2f%%\n",percoelhos);
        printf("Percentual de ratos: %.2f%%\n",perratos);
        printf("Percentual de sapos: %.2f%%\n",persapos);













       return 0;
}
