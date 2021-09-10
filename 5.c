#include <stdio.h>
int main(void)
{
    float salario,imposto;
    printf("Informe sua renda:R$ ");
    scanf("%f",&salario);
    if (salario <=2000)
    {
        printf("Isento");
    }
    if ((salario>2000) && (salario <=3000))
    {
     imposto= (salario-2000) * 0.08;
     printf("R$ %.2f\n",imposto);
    }
    if ((salario>3000)&& (salario<4500))
    {
        imposto= ((salario-3000)* 0.18) + (1000*0.08);
        printf("R$ %.2f\n",imposto);
    }
     if (salario>4500)
    {
        imposto= (1500 *0.18) + (1000*0.08)+ ((salario-4500)*0.28);
        printf("R$ %.2f\n",imposto);
    }




    return 0;
}
