#include <stdio.h>


int main(void)
{

    int a,b,q,r;
    scanf("%d %d",&a,&b);
    q=a/b;
    r=-a+(b*q);
    printf("%d %d",q,r);
    return 0;
}
