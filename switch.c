#include <stdio.h>

int opc1=0;
int opc2=2;||

int main(){

    printf("MENU  \n");     
    printf("0. bebidas\n");
    printf("1. postre\n");
    switch (opc1)
    {
        case 0:
        printf("MENU bedidas \n");     
        printf("0. soda\n");
        printf("1. malta\n");
        printf("2. limonada\n");
            switch (opc2){
                case 0:
                    printf("elijio soda");
                    break;
                case 1:
                    printf("elijio malta");
                    break;
                case 2:
                    printf("elijio limonada");
                    break;
            } 
    }
 
}