#include <stdio.h>
int main()
{
    int X=1,soma,i;
    while(X!=0)
    {
        scanf("%d",&X);
        if (X!=0)
        {
            soma=0;
            for (i=0; i<5;)
            {
                if (X%2==0)
                {
                    i++;
                    soma=soma+X;
                }
                X++;
            }
            printf("%d\n",soma);
        }
    }



    return 0;
}
