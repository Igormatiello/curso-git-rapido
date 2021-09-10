/*Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário. A seguir,
 calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2.
 As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir mostre a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor de ponto flutuante N (0 ≤ N ≤ 1000000.00).

Saída
Imprima a quantidade mínima de notas e moedas necessárias para trocar o valor inicial, conforme exemplo fornecido.

Obs: Utilize ponto (.) para separar a parte decimal.*/
#include <stdio.h>
int main(void)
{
    float din,resto;
    int cem,cinquenta,vinte,dez,cinco,dois,um,cent50,cent20,cent10,cent5,cent1;
    printf("Informe o valor monetario: ");
    scanf("%f",&din);
    cem=(din/100);
    cinquenta= ((int)din - (cem*100)) %50;
    vinte= ((int)din - (cem*100)- (cinquenta*50)) % 20;
    dez= ((int)din - (cem*100)- (cinquenta*50)- (vinte*20)) %10;
    cinco= ((int)din - (cem*100)- (cinquenta*50)- (vinte*20) -(10*dez)) %5;
    dois=((int)din - (cem*100)- (cinquenta*50)- (vinte*20) -(10*dez)- (5*cinco)) % 2;
    um=((int)din - (cem*100)- (cinquenta*50)- (vinte*20) -(10*dez)- (5*cinco)- (2*dois))%1;
    resto=((int)din - (cem*100)- (cinquenta*50)- (vinte*20) -(10*dez)- (5*cinco)- (2*dois) - (um*1));




    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",cem);
    printf("%d nota(s) de R$ 50.00\n",cinquenta);
    printf("%d nota(s) de R$ 20.00\n",vinte);
    printf("%d nota(s) de R$ 10.00\n",dez);
    printf("%d nota(s) de R$ 5.00\n",cinco);
    printf("%d nota(s) de R$ 2.00\n",dois);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",um);
    printf("%d moeda(s) de R$ 0.50\n",cent50);
    printf("%d moeda(s) de R$ 0.25\n",cent20);
    printf("%d moeda(s) de R$ 0.10\n",cent10);
    printf("%d moeda(s) de R$ 0.05\n",cent5);
    printf("%d moeda(s) de R$ 0.01\n",cent1);








    return 0;
}
