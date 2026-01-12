#include <stdio.h>

int n=20;
int main()
{
    do
    {
         printf("n es mayor de 10 %d \n", n);
        n=n-1;
    }  while (n>10);   
    printf("hemos salido del bulq por que n es menor igual a 10");
}