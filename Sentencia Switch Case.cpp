#include <iostream>

using namespace std;

int main(){
    int opcion=0;
    cout<<"opcion:";
    cin>>opcion;
    switch (opcion)
    {
    case 1:
        cout<< "opcion 1";
        break;
    case 2:
        cout<< "opcion 2";
        break;
    
    case 3:
        cout<< "opcion 3";
        break;
    
    default:
        cout<< "error";
        break;
    }
}