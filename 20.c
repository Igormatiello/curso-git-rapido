#include <stdio.h>


int main() {

    int M,N,soma,menor,maior,i;
    do{
       scanf("%d %d",&M,&N);
       if (M>0 && N>0)
       {
       soma=0;

       if (M>N)
       {
           maior=M;
           menor=N;
       }
       else
       {
           maior=N;
           menor=M;
       }
       for (i=menor; i<=maior; i++)
       {
           soma=soma+i;
           printf("%d ",i);
       }
       printf("Sum=%d\n",soma);
       }
    }while(M>0 && N>0);



    return 0;
}
