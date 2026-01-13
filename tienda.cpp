#include<iostream> //librebreria
#include<string>//librebreria
#include<vector>//librebreria
#include<limits>//lebraria para borar letra cuando numeros
using namespace std;


struct persona{
    string nombre;
    string cedula;
    string contrasena;
}; 

void menu(vector<persona>& lista);
void jefe(vector<persona>& lista);
void insertaempleado(vector<persona>& lista);
void mostrarEmpleados(vector<persona>& lista);
void modificarEmpleados(vector<persona>& lista);
void eliminarEmpleados(vector<persona>& lista);

int main()
{
  vector<persona> lista ; //crear la lista
  menu(lista);
  return 0;
}

void menu(vector<persona>& lista  )
{   
    
    int opc;

    while (true)
    {
        cout<<"MENU TIENDITA"<<endl;
        cout<<"1.jefe"<<endl;
        cout<<"2.empleado"<<endl;
        cout<<"3.cliente"<<endl;   
        cout<<"elije la opciion: "<<endl;  
        

        if(!( cin >> opc))
        {
            cout<<"invalidado"<<endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

        }

        if (opc>=1 && opc<=3)
        {
            break;
        }
        else
        {
            cout<<"intente nuevamente"<<endl;
        }
    }
    

    switch (opc)
    {
        case 1:
            cout<<"menu jefe"<<endl;
            jefe(lista);
            break;
        case 2:
            cout<<"menu empleado"<<endl;
            break;
        case 3:
            cout<<"menu cliente"<<endl;
            break;
       
            
    }
}

void jefe(vector<persona>& lista)
//Funcionalidades para el Jefe
//1. Tendrá un menú para hacer el CRUD 
//para los empleados a los cuales les asignará contraseña.
{
    int opc;

    while (true)
    {
       cout<<"MENU JEFE"<<endl;
       cout<<"1.crear empleado"<<endl;
       cout<<"2.ver empleado"<<endl;
       cout<<"3.modificar empleado"<<endl;
       cout<<"4.eliminar empleado"<<endl;     
       cout<<"elije la opciion: "<<endl;   

       if(!( cin >> opc))
        {
            cout<<"invalidado"<<endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        if (opc>=1 && opc<=4)
        {
            break;
        }
        else
        {
            cout<<"intente nuevamente"<<endl;
        }
    }
      
    switch (opc)
    {

        case 1:
            cout<<"crear empleado"<<endl;
            insertaempleado(lista);
            jefe(lista);
            break;
        case 2:
            cout<<"ver empleado"<<endl;
            mostrarEmpleados(lista); 
            jefe(lista);  
        case 3:
            cout<<"modificar empleado"<<endl;
            modificarEmpleados(lista);
             
            break;
        case 4:
            cout<<"eliminar empleado"<<endl;
            eliminarEmpleados(lista);
            jefe(lista);
            break;
        default:
            cout<< "opcion invalida";
            break;
    }

}

//prototipo de la funcion


void insertaempleado(vector<persona>& lista)
{    
    
    persona p; // ojeto temporal
    char opc;
    do
    {
        cout<<"nombre"<<endl;
        cin>>p.nombre;
        cout<<"cedula"<<endl;
        cin>>p.cedula;
        cout<<"contraseña"<<endl;
        cin>>p.contrasena;
        lista.push_back(p);

        cout<<"desea agregar otro s/n"<<endl;
        cin>>opc;
        
        cout<<"se guardo en la lista"<<endl;

    } while (opc=='s'|| opc=='S');
}       
    //guara en la lista

void mostrarEmpleados(vector<persona>& lista)
{
    cout << "\nLISTA DE EMPLEADOS\n";
   for (const persona& x : lista){
        cout << x.cedula << ";"
             << x.nombre << ";"
             << x.contrasena << endl;
    }
}



void modificarEmpleados(vector<persona>& lista)
{
    persona p;
    string cedula;
    string nuevo;
    cout<<"CAMBIAR CONTRASENA"<<endl;
    cout<<"ingresa la cedula"<<endl;
    cin>>cedula;
    
    
    for (persona& x: lista)
    {
        if (cedula == x.cedula)
        {
            cout<<"ingrese la nuva contraseña"<<endl;
            cin>>nuevo;
            x.contrasena=nuevo;
            cout<<"nueva contraseña"<<endl;
            cout<<x.contrasena;
        }
    }
}

void eliminarEmpleados(vector<persona>& lista)
{

    persona p;
    string cedula;
    string nuevo;
    cout<<"ELIMINAR"<<endl;
    cout<<"ingresa la cedula"<<endl;
    cin>>cedula;

     cout<<" ELIMINADO"<<endl;

}
