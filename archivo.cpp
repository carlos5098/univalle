#include<iostream>
#include<fstream>

using namespace std;

int main()
{
  ofstream file("pepe.txt") ;
  if(file.is_open())  //informo que el arvchivo se creo corretamente
  {
      file<<"hola plazti"<<endl;
      file<<"soy carlos"<<endl;
      
  }
  file.close();
  
  ifstream fileleer("pepe.txt");
  string line;

  if (fileleer.is_open())
  {
    while (getline(fileleer, line))
    {
      cout<<line<<endl;
    }
    
  }
} 



