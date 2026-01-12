#include <stdio.h>
int a=100;
int b=100;
int demo(int a, int b);

int main()
{
    
    printf("la suma de %d  mas %d es  : %d",a,b,demo(100,100));
    return 0;
}

int demo(int a, int b)
{   
    int sum;
    sum = a + b;
    //printf("la suma de %d  mas %d es  : %d",a,b,sum);
    return sum;
}