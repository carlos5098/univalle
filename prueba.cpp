
#include<iostream> //librebreria
#include<string>//librebreria
#include<vector>//librebreria
#include<limits>//lebraria para borar letra cuando numeros
using namespace std;

struct persona {
    string nombre;
    string contrasena;
};

vector<persona> lista = {
    {"Ana", "111"},
    {"Luis", "222"},
    {"Pedro", "333"}
};



int main()
{
for (const persona& p : lista)
{
    cout << p.nombre << p.contrasena << endl;
}
}


