/*Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo. A seguir calcule a dura��o do jogo.

Obs: O jogo tem dura��o m�nima de um (1) minuto e dura��o m�xima de 24 horas.

Entrada
Quatro n�meros inteiros representando a hora de in�cio e fim do jogo.

Sa�da
Mostre a seguinte mensagem: �O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)� .*/
#include <stdio.h>
int main(void)
{
    int min1,hora1,minfinal,horafinal,min2,hora2;
    printf("Informe a hora de inicio: ");
    scanf("%d",&hora1);
    printf("Informe o minuto de inicio: ");
    scanf("%d",&min1);
     printf("Informe a hora de termino: ");
    scanf("%d",&hora2);
    printf("Informe o minuto de termino: ");
    scanf("%d",&min2);



    if ((min1<=min2)&& (hora1<=hora2))
        {
        horafinal= hora2-hora1;
        minfinal=min2-min1;
        }
        if ((min1 > min2)&& (hora1<hora2))
        {
        horafinal= (hora2-hora1)-1;
        minfinal= 60 - (min1-min2);
        }
         if ((min1>min2)&& (hora1==hora2))

            {
            horafinal=23;
            minfinal=60- (min1-min2);
            }
            if ((min1==min2)&& (hora1==hora2))
            {
               horafinal=24;
               minfinal=0;
            }
             if ((min1<=min2)&& (hora1>hora2))
            {
                horafinal=24 - (hora1-hora2);
               minfinal=min2-min1;
            }
            if ((min1>min2)&& (hora1>hora2))
            {
                horafinal=24 - (hora1-hora2);
             minfinal=60- (min1-min2);
            }


        printf("O JOGO DUROU %d HORAS(S) E %d MINUTO(S)\n",horafinal,minfinal);








    return 0;
}
