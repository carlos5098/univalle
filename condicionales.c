#include <stdio.h>

int opc1=1;
int opc2=2       ;

int main(){
    if(opc1==0){
        //hacr el menu
        printf("MENU bedidas \n");     
        printf("0. soda\n");
        printf("1. malta\n");
        printf("2. limonada\n");
        if (opc2==0)
             printf("elijio soda");
        else if (opc2==1)
            printf("elijio malta");
        else if (opc2==2)
            printf("elijio limonada");
        else
            printf("invalidado") ;  
    }

        else if (opc1==1)
        printf("MENU postres 0\n");     
        printf("0. torta\n");
        printf("1. arrozleche\n");
        printf("2. papa\n");
        if (opc2==0)
             printf("elijio torta\n");
        else if (opc2==1)
            printf("elijio arrozleche\n");
        else if (opc2==2)
            printf("elijio papa\n");
        else
            printf("invalidado") ;     
  
    
    
}