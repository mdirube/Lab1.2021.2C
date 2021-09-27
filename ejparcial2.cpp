///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int i, numeroJugador, cantidadPartidos, minutosJuego, pais;
    ///punto 1
    int contadorDeJugadores14=0;
    ///punto 2
    int sumaTiempos=0;
    float tiempoPromedio;
    ///punto 3
    bool primero=true;
    int menorTiempo, menorJugador, menorPais;

    for(i=0;i<20;i++){
        cout<<"NUMERO DE JUGADOR: ";
        cin>>numeroJugador;
        cout<<"CANTIDAD DE PARTIDOS JUGADOS: ";
        cin>>cantidadPartidos;
        cout<<"CANTIDAD DE MINUTOS DE JUEGO: ";
        cin>>minutosJuego;
        cout<<"PAIS: ";
        cin>>pais;
        ///punto 1
        if(pais==14)contadorDeJugadores14++;
        ///punto 2
        sumaTiempos+=minutosJuego;
        ///punto 3
        if(primero==true && minutosJuego!=0){
            menorTiempo=minutosJuego;
            menorJugador=numeroJugador;
            menorPais=pais;
            primero=false;
        }
        else{
            if(minutosJuego<menorTiempo && minutosJuego!=0){
                menorTiempo=minutosJuego;
                menorJugador=numeroJugador;
                menorPais=pais;
            }
        }

    }
	///punto 1
	cout<<"CANTIDAD DE JUGADORES DEL PAIS 14: "<<contadorDeJugadores14<<endl;
	///punto 2
	tiempoPromedio=(float)sumaTiempos/20;
	cout<<"TIEMPO PROMEDIO: "<<tiempoPromedio<<endl;
	cout<<"JUGADOR QUE MENOS JUGO: "<<menorJugador<<" DEL PAIS: "<<menorPais<<endl;
	cout<<endl;
	system("pause");
	return 0;
}
