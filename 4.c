/*3) A figura a seguir representa uma árvore de decisão para identificar se um paciente está saudável ou
doente. Elabore um programa que implementa essa árvore de decisão*/
#include <stdio.h>


int main(void)
{
    int diain,datain,diafim,datafim,horainicial, horafinal,minutoinicial,minutofinal,segundoinicial,segundofinal,horas,dias,minutos,segundos;
    printf("Informe o dia de inicio: ");
    scanf("%d",&diain);
    printf("Informe a data de inicio (hh/mm/ss): ");
    scanf("%d",&datain);
    printf("Informe o dia de termino: ");
    scanf("%d",&diafim);
    printf("Informe a data de termino (hh/mm/ss): ");
    scanf("%d",&datafim);
    horainicial= datain / 10000;
    horafinal=datafim / 10000;
    minutoinicial= datain % 10000;
    minutofinal=datafim % 10000;
    segundoinicial= datain %10;
    segundofinal= datafim %10;

    if ((diain == diafim) || (((diafim-diain)==1) && (horainicial>horafinal)))
    {
        dias=0;
    }
    else
    {

        dias=  diafim-diain;
    }
    if (horainicial>horafinal)
    {

        horas= 24 - (horainicial-horafinal);
    }
    else
    {
        horas=horafinal-horainicial;
    }

    if (minutoinicial>minutofinal)
    {

        minutos= 60 - (minutoinicial-minutofinal);
    }
    else
    {
        minutos=minutofinal-minutoinicial;
    }

    if (segundoinicial>segundofinal)
    {
        segundos=60- (segundoinicial-segundofinal);
    }

    else
    {
        segundos= segundofinal-segundoinicial;
    }



        printf("O evento durou:\n %d dia(s)\n %d hora(s)\n %d minuto(s)\n %d segundo(s)",dias,horas,minutos,segundos);




        return 0;
    }


