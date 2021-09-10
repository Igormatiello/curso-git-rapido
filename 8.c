#include <stdio.h>


int main(void)
{
    int N[20],i,k;

    for (i=0;i<20; i++)
    {
    printf(" ");
    scanf("%d",&N[i]);
    }
    k=0;
    for (i=19;i>=0; i--, k++){
        printf("N[%d] = %d\n",k,N[i]);

    }






    return 0;
}
