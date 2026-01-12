#include <iostream>

using namespace std;

int main() {
     do {
        char respuesta;
        cout <<"desea continuar"<< endl;
        cin >>respuesta;
        if (respuesta=='y'){
            cout << "adios";
            break;
        }
    }while (true);
}

