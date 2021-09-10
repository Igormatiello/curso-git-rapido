#include <stdio.h>
int main(void)
{
    float x,y;
    printf("Informe a cordenada em X: ");
    scanf("%f",&x);
    printf("Informe a cordenada em Y: ");
    scanf("%f",&y);
    if ((x==0)&&(y==0))
    {
        printf("Origem");
    }
    if ((x==0)&& (y!=0))
    {
        printf("Eixo Y");
    }
    if ((x!=0)&&(y==0))
    {
        printf("Eixo X");
    }
    if ((x!=0)&& (y!=0))
    {
       if ((x>0)&&(y>0))
       {
           printf("Q1");
       }
        if ((x<0)&&(y>0))
       {
           printf("Q4");
       }
        if ((x>0)&&(y<0))
       {
           printf("Q3");
       }
        if ((x<0)&&(y<0))
       {
           printf("Q2");
       }
    }





    return 0;
}
