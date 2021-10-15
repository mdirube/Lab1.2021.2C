///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;

///FUNCIONES: son fragmentos de código, que tienen un nombre, pueden recibir valores, y pueden devolver un valor.
///En general se encargar de resolver un problema en particular.
/// Todas tienen la siguiente forma:

/// valorDevuelto nombre(parametros){
/// código
///}
void cartel(int a){
    if(a==1) cout<<"HOLA A TODOS/AS!!!!"<<endl;
    else cout<<"CHAU A TODOS/AS!!!!"<<endl;
}

void cargarVector(int v[10]){
    int i;
    for(i=0;i<10;i++){
        cout<<"VALOR: ";
        cin>>v[i];
    }
}

void mostrarVector(int v[10]){
    int i;
    for(i=0;i<10;i++){
        cout<<v[i]<<endl;
    }
}

int main(){
    const int CANT=10 ;
    int edad, i, sumaEdad=0, masProm=0;

    int vEdad[10];
    float prom;
    ///cargar del vector
    cargarVector(vEdad);
    ///mostrar el vector
    mostrarVector(vEdad);
  /*
    for(i=0;i<CANT;i++){
        cout<<"EDAD: ";
        cin>>edad;
        vEdad[i]=edad;
    }

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

    ///5
    if(vEdad[0]>vEdad[CANT-1]){
        cout<<"EL PRIMERO ES MAS GRANDE"<<endl;
    }
    else{
        if(vEdad[0]<vEdad[CANT-1]){
            cout<<"EL PRIMERO ES MAS CHICO"<<endl;
        }
    }*/
    cartel(4);
	system("pause");
	return 0;
}


