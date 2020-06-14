#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int opcion=0, Numsorpresa=77, contador=0, ganador=0;
    
    do{
        cout<< "Bienvenido!!  desea probar suerte? "<<endl<<endl;
        cout<<"1) Pobrar numero entre 1 al 100 al azar para ganar"<<endl;
        cout<<"0) Salir..."<<endl;
        cout<<"Opcion: ";
        cin>>opcion;

        switch(opcion){

            case 1:
            contador++;
            if(contador<=5){

                cout<<endl<<"Ingresa el numero, mucha suerteeee! :"<<endl;
                cin>>ganador;
                if(ganador == Numsorpresa ){

                    cout<<endl<<"Haz ganado!!! Muchas felicidades "<<endl<<endl;
                }
                else 
                cout<<"Vuelve a intentar, estas muy cerca "<<endl<<endl;

            }
            else{
                cout<<endl<<endl<< "Se acabaron el numero de intentos, haz perdido :((( " <<endl <<endl;
                opcion=0;
            }

            break;
            case 0:
            default:
            cout<<endl<<"SI  DESEA PARTICIPAR, SOLO INGRESE AL SISTEMA DE NUEVO :)"<<endl;
            
        }

    }while(opcion!= 0);

}