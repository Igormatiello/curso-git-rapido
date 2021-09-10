#include <stdio.h>
int main(void)
{
    int x=0;
    float nota1,nota2,media;
    printf("Informe a primeira nota: ");
    scanf("%f",&nota1);
    printf("Informe a segunda nota: ");
    scanf("%f",&nota2);
    printf("media = %.2f\n",((nota1+nota2)/2));
    if (((nota1 >=0) && (nota1<=10)) &&((nota2>=0) && (nota2<=10)))
        media= (nota1 +nota2) /2;
               else
        {
            printf("nota invalida\n");
        }
    for(x=0; x!=2 ;)
    {
        printf("Novo calculo (1-sim, 2-nao):");
        scanf("%d",&x);
        if (x==2)
        {
            x=2;
        }
        else
        {
            printf("Informe a primeira nota: ");
            scanf("%f",&nota1);
            printf("Informe a segunda nota: ");
            scanf("%f",&nota2);
             printf("media = %.2f\n",((nota1+nota2)/2));
            x=1;
            if (((nota1 >=0) && (nota1<=10)) &&((nota2>=0) && (nota2<=10)))
                media= (nota1 +nota2) /2;
                       else
                {
                    printf("nota invalida\n");
                }

        }
    }




    return 0;
}
