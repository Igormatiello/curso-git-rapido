#include <stdio.h>


int main(void)
{

    int n,i,menor,posicao;
    printf("");
    scanf("%d",&n);
    int x[n];

    for (i=0; i<n; i++){
        printf("");
        scanf("%d",x[i]);

        if (i==0)

        {
            menor=x[0];
            posicao=0;
        }
     if( x[i]<menor)
        {
            menor=x[i];
            posicao=i;
        }

    }
printf("Menor valor: %d\n",menor);
printf("Posicao: %d\n",posicao);





    return 0;
}
