#include <stdio.h>


int main(void)
{
    int p[5],i[5], l,paux=0,iaux=0,num,contador=0;

    for (l=0; l<15;l++)
    {
        printf("");
        scanf("%d",&num);
        if (num%2==0)
        {
            p[paux]=num;
            paux++;
        }
        else {
            i[iaux]=num;
            iaux++;
        }
        if (paux==5)
        {
            for (contador=0; contador<paux; contador++)
            {
                printf("par[%d] = %d\n",contador,p[contador]);
            }
            paux=0;
            contador=0;
        }
        if (iaux==5)
        {
            for (contador=0; contador<iaux; contador++)
            {
                printf("impar[%d] = %d\n",contador,i[contador]);
            }
            iaux=0;
            contador=0;
        }

    }
    for (contador=0; contador<iaux; contador++)
            {
                printf("impar[%d] = %d\n",contador,i[contador]);
            }

         for (contador=0; contador<paux; contador++)
            {
                printf("par[%d] = %d\n",contador,p[contador]);
            }



    return 0;
}
