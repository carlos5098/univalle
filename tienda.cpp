#include<iostream> //librebreria
#include<string>//librebreria
#include<vector>//librebreria
#include<limits>//lebraria para borar letra cuando numeros
using namespace std;

//lista empleado se crea la estrutura

struct persona{
    string nombre;
    string cedula;
    string contrasena;
}; 

// lista productos

struct producto{
    string codigo;
    string nombre;
    string cantida;
    string precio;
}; 

///definie la funcion

void menu(vector<persona>& lista, vector<producto>& inventario);
void jefe(vector<persona>& lista, vector<producto>& inventario);
void insertaempleado(vector<persona>& lista);
void mostrarEmpleados(vector<persona>& lista);
void modificarEmpleados(vector<persona>& lista);
void eliminarEmpleados(vector<persona>& lista);
void agregarinvetario(vector<producto>& inventario);
void productos(vector<producto>& inventario);

int main()
{
  vector<persona> lista ; //crear la lista
  vector<producto> inventario;
  menu(lista, inventario);
  return 0;
}

void menu(vector<persona>& lista, vector<producto>& inventario  )
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
            jefe(lista,inventario);
            break;
        case 2:
            cout<<"menu empleado"<<endl;
            agregarinvetario(inventario);
            break;
        case 3:
            cout<<"menu cliente"<<endl;
            break;
       
            
    }
}

void jefe(vector<persona>& lista, vector<producto>& inventario)
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
       cout<<"5. menu anterior: "<<endl;   
       cout<<"elije la opciion: "<<endl; 

       if(!( cin >> opc))
        {
            cout<<"invalidado"<<endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        if (opc>=1 && opc<=5)
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
            jefe(lista, inventario);
            
            break;
        case 2:
            cout<<"ver empleado"<<endl;
            mostrarEmpleados(lista); 
            jefe(lista, inventario);
              
        case 3:
            cout<<"modificar empleado"<<endl;
            modificarEmpleados(lista);
            jefe(lista, inventario);
              
             
            break;
        case 4:
            cout<<"eliminar empleado"<<endl;
            eliminarEmpleados(lista);
            jefe(lista, inventario);
        
        case 5:
            cout<<"menu anterior"<<endl;
            menu(lista, inventario);
        
    
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
    string cedula;
    cout<<"ELIMINAR EMPLEADO"<<endl;

    cin>>cedula;
  
    //lista.erase(lista.begin() + posicion);
    for (int i=0; i<lista.size() ;i++)
    {
        if (lista[i].cedula == cedula)
        {
            
            lista.erase(lista.begin()+i);

            cout<<"se elimino"<<endl;
        }
    }

}


void agregarinvetario(vector<producto>& inventario)
{
    int opc;

    while (true)
    {
       cout<<"MENU EMPLEADO"<<endl;
       cout<<"1.ingresar producto"<<endl;
       cout<<"2.ver inventario"<<endl;     
       cout<<"elije la opciion: "<<endl;   

       if(!( cin >> opc))
        {
            cout<<"invalidado"<<endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        if (opc>=1 && opc<=2)
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
            cout<<"ingresar producto"<<endl;
            break;
        case 2:
            cout<<"ver inventario"<<endl;
            break;
        default:
            cout<< "opcion invalida";
            break;
    }

}

<<<<<<< HEAD
void productos(vector<producto>& inventario)
{

    //ingresar en la lista el producto 
}
=======
//void productos(vector<producto>& inventario)
//{
//
//    //ingresar en la lista el producto 
//}
>>>>>>> conitnuidad-de-codigo
