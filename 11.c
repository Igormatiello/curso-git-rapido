#include <stdio.h>


int main(void)
{
    int vezes,anterior,atual,proximo;
    printf("");
    scanf("%d",&vezes);


    int i,num,l;

    for (i=1; i<=vezes; i++)
{
    anterior=0;
    atual=1;
    proximo=atual+anterior;


    printf("");
    scanf("%d",&num);
if (num==0)
{
    proximo=0;
}
    for (l=1; l<num; l++)
    {
        proximo=atual+anterior;
        anterior=atual;
        atual=proximo;
    }

    printf("Fib(%d) = %d\n",num,proximo);


}

    return 0;
}
