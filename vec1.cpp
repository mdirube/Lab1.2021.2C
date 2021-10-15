///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;

///Vector: es una estructura de datos en la que bajo un mismo nombre se pueden almacenar un conjunto
///de valores de UN MISMO TIPO

/// Al final del ejercicio:
///    1) Mostrar la última componente del vector
///    2) Mostrar todos los componentes del vector
///    3) Calcular e informar la resta del último componente menos el primero
///    4) Ingresar un número entero entre el 0 y el 4. Luego reemplazar por el valor 0 el contenido de esa posición
///        del vector
///     5) Informar si el primer elemento del vector es mayor o menor al último elemento

int main(){
    const int CANT=10 ;
    int edad, i, sumaEdad=0, masProm=0;

    int vEdad[CANT];

    float prom;
    ///cargar del vector
    for(i=0;i<CANT;i++){
        cout<<"EDAD: ";
        cin>>edad;
        vEdad[i]=edad;
    }
  /*
    ///suma de todos los componentes del vector
    for(i=0;i<CANT;i++){
        sumaEdad+=vEdad[i];
    }

    prom=(float)sumaEdad/CANT;
    cout<<"PROMEDIO DE EDAD: "<<prom;

	cout<<endl;
	for(i=0;i<CANT;i++){
        if(vEdad[i]>prom)masProm++;
    }

	cout<<"CANTIDAD MAYOR AL PROMEDIO: "<<masProm<<endl;

	///1
	//cout<<"ULTIMA COMPONENTE DEL VECTOR: "<<vEdad[9]<<endl;
	//cout<<"ULTIMA COMPONENTE DEL VECTOR: "<<vEdad[CANT-1]<<endl;
	///2
	for(i=0;i<CANT;i++){
        cout<<"CONTENIDO DE vEdad EN "<<i <<" "<<vEdad[i]<<endl;
    }
    ///3
    int resta;
    resta=vEdad[CANT-1]-vEdad[0];
    cout<<"RESTA DEL ULTIMO MENOS EL PRIMERO: "<<resta<<endl;

    ///4
    int pos;
    cout<<"INGRESE UN VALOR ENTRE 0 Y "<<CANT-1<<endl;
    cin>>pos;
    vEdad[pos]=0;
    for(i=0;i<CANT;i++){
        cout<<"CONTENIDO DE vEdad EN "<<i <<" "<<vEdad[i]<<endl;
    }
    */
    ///5
    if(vEdad[0]>vEdad[CANT-1]){
        cout<<"EL PRIMERO ES MAS GRANDE"<<endl;
    }
    else{
        if(vEdad[0]<vEdad[CANT-1]){
            cout<<"EL PRIMERO ES MAS CHICO"<<endl;
        }
    }
	system("pause");
	return 0;
}
