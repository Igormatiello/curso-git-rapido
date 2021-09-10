#include <stdio.h>
int main()
{
    int N,i,Hi[N],inicial,validar,aux=1;
    scanf("%d",&N);

    for (i=0; i<N; i++)
    {
        scanf("%d",&Hi[i]);
    }

    if (Hi[0]>Hi[1])
    {
        inicial=0;
    }
    else
    {
        inicial=1;
    }
    for (i=inicial ; i<N ; i++)
    {
        if (Hi[i]>Hi[i+1] && aux==1)
        {
            validar=1;
            aux=0;
        }
        else if (Hi[i]<Hi[i+1] && aux==0)
        {
            validar=1;
            aux=1;
        }
        else
        {

            printf("Problema avistado: %d\n",i);
            validar=0;

            break;
        }

    }
    printf("%d\n",validar);
    return 0;
}
