#include<stdio.h>
int main(){

int i, odd ;
for ( i = 9 ; i >= 0; i--)
{
  odd = (2*i + 1);
  printf(" reverse order %d\n", odd);
}

return 0;
}