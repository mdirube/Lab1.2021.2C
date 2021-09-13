///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;
/*Hacer un programa para ingresar una lista de números que finaliza cuando se ingresan
dos números positivos consecutivos, y luego informar el máximo. Cuando se ingresa el
número positivo repetido el mismo debe ser descartado.
*/

int main(){
    int num, contadorPos=0, maximo;
    cout<<"NUMERO: ";
    cin>>num;
    maximo=num;
    if(num>0){
        contadorPos++;
    }

    while(contadorPos<2){

        cout<<"NUMERO: ";
        cin>>num;
        if(num>maximo){
            maximo=num;
        }
        if(num>0){
            contadorPos++;
        }
        else{
            contadorPos=0;
        }
    }
    cout<<"MAXIMO: "<<maximo;

	cout<<endl;
	system("pause");
	return 0;
}
