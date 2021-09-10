///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;
/*15) Hacer un programa para ingresar una lista de números que finaliza cuando
se ingresa un cero.
Informar si todos están ordenados en forma creciente. En caso de haber dos números
“empatados” considerarlos como crecientes.
*/

///1,2,2,4,5,6,0
int main(){
    int n, anterior;
    bool ordenado=true;
    cout<<"NUMERO: ";
    cin>>n;
    anterior=n;
    while(n!=0){
        cout<<"NUMERO: ";
        cin>>n;
        if(n<anterior && n!=0){
            ordenado=false;
        }
        anterior=n;
    }
	if(ordenado==true){
        cout<<"ESTA ORDENADO";
	}
	else{
        cout<<"NO ESTA ORDENADO";
	}

	cout<<endl;
	system("pause");
	return 0;
}
