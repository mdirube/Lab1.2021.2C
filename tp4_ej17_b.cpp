///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;
///Hacer un programa para ingresar una lista de números que finaliza cuando se ingresan
///dos números consecutivos iguales

///y luego informar el máximo. Cuando se ingresa el
///número repetido el mismo debe ser descartado.


int main(){
    bool seguir=true, primero=true;
    int num, anterior, maximo;

    while(seguir==true){
        cout<<"NUMERO: ";
        cin>>num;
        if(primero==true){
            anterior=num;
            maximo=num;
            primero=false;
        }
        else{
            if(num>maximo){
                maximo=num;
            }

            if(anterior==num){
                seguir=false;
            }
        }
        anterior=num;
    }
	cout<<"EL MAXIMO VALOR INGRESADO FUE: "<<maximo;
	cout<<endl;
	system("pause");
	return 0;
}
