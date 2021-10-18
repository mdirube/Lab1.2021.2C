///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;
///VECTOR: estructura de datos en la que bajo un mismo nombre, se puede almacenar un
///conjunto de valores DE UN MISMO TIPO.
///La cantidad de valores tiene que definirse al momento de la declaración, y debe hacerse
///mediante una constante
///
///a) Listar todas las notas
///b) Dado un valor que se ingresa por teclado, informar cuántas veces se repite ese valor
/// dentro de las notas
///c) Listar las notas de los examenes aprobados (mayor igual a 6)
///d) Informar cuántos alumnos aprobaron.
///e) Informar cuántos alumnos desaprobaron


int main(){
    const int TAM=5;
    int vNotas[TAM], i, suma=0, contMas=0, nota;
    float prom;
    ///carga del vector
    for(i=0;i<TAM;i++){
        cout<<"NOTA: ";
        cin>>nota;
        vNotas[i]=nota;
    }
    ///fin de la carga
    ///suma de todos los elementos del vector
    for(i=0;i<TAM;i++){
        suma+=vNotas[i];
    }
    ///fin de la suma de todos los elementos
	prom=(float)suma/TAM;

	for(i=1;i<=TAM;i++){
        if(vNotas[i]>prom){
            contMas++;
        }
	}
	cout<<"CANTIDAD MAYOR AL PROMEDIO: "<< contMas;
	cout<<endl;
	system("pause");
	return 0;
}
