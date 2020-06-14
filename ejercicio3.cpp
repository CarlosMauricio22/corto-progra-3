#include <iostream>
using namespace std;
int main(){
      int a;
      cout<<"HOLA BIENVENIDO!! INGRESE UN ANIO PARA CALCULAR SI ES BISIESTO O NO: ";
      cin>>a;
     if(a % 4 == 0 && (a % 100 != 0 || a % 400 == 0)){
         cout<<"El anio indicado:  "<<a<<" Si es bisiesto ";
     }else{
         cout<<"El anio indicado:  "<<a<<" No es bisiesto ";
     }
      return 0;
}