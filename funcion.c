#include <stdio.h>

//int elevar(int base, int n);//

int elevar(int base, int n)
{
    int i,p;
    p=1;
    for (i=1; i<=n; i++)
    {
        p=p*base;
    }
    return p;
}
int main()
{
    int i;
    for (i=0; i<10; i++)
    {
        printf("n = %d resultado de la potencia = %d \n",i,elevar(2,i));
    }
    return 0;
}

