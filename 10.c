#include <stdio.h>


int main(void)
{
    float num,v[100];
    int i;
    printf("");
    scanf("%f",&num);
    v[0]=num;
    printf("N[0] = %.4f\n",num);
    for (i=1;i<100; i++){

        v[i]=v[i-1]/2;
        printf("N[%d] = %.4f\n",i,v[i]);
    }



    return 0;
}
