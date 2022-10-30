#include<stdio.h>
int main(){

int i, sqr;
for ( i = 1 ; i < 11; i++)
{
  sqr =  i*i;
  printf("%d^2 = %d \n", i,sqr);
}

return 0;
}