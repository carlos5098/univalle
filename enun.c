#include <stdio.h>

enum weekDays { lunes,martes,miercoles,jueves,viernes,sabado,domingo};

int main() {
 
    enum weekDays today;
    today=martes;
    printf("day %d", today+1);

}
   

