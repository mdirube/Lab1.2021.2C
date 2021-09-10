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
    bool seguir=true;
    int num, anterior, maximo, contadorPositivos=0;
    cout<<"NUMERO: ";
    cin>>num;
    if(num>0){
        contadorPositivos++;
    }
    maximo=num;
    while(seguir==true){
        anterior=num;
        cout<<"NUMERO: ";
        cin>>num;

        if(num>0){
            contadorPositivos++;
        }
        else{
            contadorPositivos=0;
        }
        if(num>maximo){
            maximo=num;
        }

        if(contadorPositivos==2){
            seguir=false;
        }
    }
	cout<<"EL MAXIMO VALOR INGRESADO FUE: "<<maximo;
	cout<<endl;
	system("pause");
	return 0;
}
