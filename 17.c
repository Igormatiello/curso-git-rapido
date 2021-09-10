#include <stdio.h>


int main () {
    int x,i,j,vezes,armazenar=1;

    while (scanf("%d", &x) == 1)
    {
        printf("Caso %d: %d numero\n",x+1,armazenar);

        for (i=0; i<=x;)
        {
            vezes=i;
            for (j=0; j<=vezes; j++)
            {
             printf("%d\t",j);

            }

        }
        armazenar=armazenar+
        printf("\n\n");
    }

    return 0;
}
