#include <stdio.h>
int main()
{
   int i=1;
   float S=0;
   while ( i<=100)
   {
       S= S + (float)1/i;
       i++;
   }
   printf("%.2f",S);

    return 0;
}
