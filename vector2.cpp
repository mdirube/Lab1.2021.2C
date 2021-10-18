///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

///FUNCIONES: son fragmentos de código que ejecutan una tarea determinada.
///Pueden recibir valores (parámetros) para realizar su trabajo; y pueden
///devolver o no UN VALOR


using namespace std;

void cartel(int par){
    if(par==1) cout<<"HOLA!!!"<<endl;
    else cout<<"CHAU!!!"<<endl;
}

void cargarVector(int v[], int tam){
    int i;
    for(i=0;i<tam;i++){
            cin>>v[i];
        }
}

void mostrarVector(int v[], int tam){
    int i;
    for(i=0;i<tam;i++){
            cout<<v[i]<<endl;
        }
}

int sumarVector(int v[], int tam){
    int i, sumaTodo=0;
    for(i=0;i<tam;i++){
            sumaTodo+=v[i];
        }
    return sumaTodo;
}
///VECTOR: estructura de datos en la que bajo un mismo nombre, se puede almacenar un
///conjunto de valores DE UN MISMO TIPO.
///La cantidad de valores tiene que definirse al momento de la declaración, y debe hacerse
///mediante una constante
///
///a) Listar todas las notas. Ok
///b) Dado un valor que se ingresa por teclado, informar cuántas veces se repite ese valor
/// dentro de las notas. ok
///c) Listar las notas de los examenes aprobados (mayor igual a 6)
///d) Informar cuántos alumnos aprobaron.
///e) Informar cuántos alumnos desaprobaron


int main(){
    const int TAM=5;
    int vNotas[TAM], i, suma=0, contMas=0, nota;
    int v2[10];
    float prom;
    system("cls");
  //  cartel(3);

    ///carga del vector
    cargarVector(vNotas, TAM);
    ///fin de la carga
    mostrarVector(vNotas, TAM);
    /*system("pause");
    system("cls");
    cargarVector(v2, 10);
    ///fin de la carga
    mostrarVector(v2,10);


*/
    ///suma de todos los elementos del vector
    suma=sumarVector(vNotas,TAM);
    cout<<"SUMA: "<<suma<<endl;
    system("pause");
    return 0;

    for(i=0;i<TAM;i++){
        suma+=vNotas[i];
    }
    ///fin de la suma de todos los elementos
	prom=(float)suma/TAM;

	for(i=0;i<TAM;i++){
        if(vNotas[i]>prom){
            contMas++;
        }
	}
	cout<<"CANTIDAD MAYOR AL PROMEDIO: "<< contMas;
	cout<<endl;
	cout<<"NOTAS"<<endl;
	///listar todas las notas
	for(i=0;i<TAM;i++){
        cout<<vNotas[i]<<endl;
    }
    ///fin listar todas
    ///búsqueda de un valor en el vector
	cout<<"INGRESE NOTA A BUSCAR: ";
	cin>>nota;
	contMas=0;
	for(i=0;i<TAM;i++){
        if(vNotas[i]==nota){
            contMas++;
        }
	}
	cout<<"LA NOTA SE REPITE "<<contMas<<endl;
	///fin búsqueda
	///mostrar mayor o igual a un valor;
	nota=6;
	for(i=0;i<TAM;i++){
        if(vNotas[i]>=nota){
            cout<<vNotas[i]<<endl;
        }
	}

	system("pause");
	return 0;
}
