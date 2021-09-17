///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;

/*25) Hacer un programa para ingresar por teclado los saldos de los clientes de un banco.
Cada registro contiene los siguientes datos:
- Número del cliente
- Número de sucursal (1, 2, 3 o 4)
- Saldo del cliente
Hay 3 registros por sucursal y los valores estan agrupados por numero de sucursal.
El lote finaliza cuando se ingresa un registro con número de sucursal igual a 10.
Se pide determinar e informar.
a) El número de sucursal con mayor porcentaje de clientes con saldo superior a $ 20.000.
b) El número de cliente con mayor saldo, indicando también de que número de sucursal ese
ese cliente. Se listan 2 resultados.
c) Para cada una de las sucursales la suma de los saldos de todos sus clientes. Se listan 4
resultados.

*/
int main(){
    int nCli,nSuc,cClientes=0,cMas20k=0, i, maximo,cVueltas=0, maxSuc, sucPtoB,m, maxNcli;
    float saldo, puntoA=0, maxCli, puntoC=0;

    cout<<"Ingrese el numero de sucursal: ";
    cin>>nSuc;

    while(nSuc!=10){
        cVueltas++;
        cClientes=0;
        cMas20k=0;
        puntoC=0;
        for (i=1;i<4 ;i++ ){
            cout<<"Ingrese el numero de cliente: ";
            cin>>nCli;
            cout<<"Ingrese el saldo: ";
            cin>>saldo;
            //Punto A
            cClientes++;
            if(saldo>20000){
                cMas20k++;
            }
            //Punto B
            if(cVueltas==1&&i==1){
                maxNcli=nCli;
                maxCli=saldo;
                sucPtoB=nSuc;
            }else if(maxCli<saldo){
                maxNcli=nCli;
                maxCli=saldo;
                sucPtoB=nSuc;
            }
            //Punto C
            puntoC+=saldo;

        }
        cout<<"Fin de ingresos de la sucursal: "<<nSuc<<" <-----."<<endl;
        //Punto A
        puntoA=(cMas20k*100)/cClientes;
        if(cVueltas==1){
            maximo=puntoA;
            maxSuc=nSuc;
        }else if(maximo<puntoA){
            maximo=puntoA;
            maxSuc=nSuc;
        }
        cout<<"El porcentaje de clientes es de esta sucursal fue de: "<<puntoA<<"%"<<endl;
        cout<<"---------------------------------------------------"<<endl;
        //Punto C
        cout<<"El saldo acumulado para la sucursal: "<<nSuc<<" es de: "<<puntoC<<endl;

        cout<<"Ingrese el numero de sucursal: "<<endl;
        cin>>nSuc;
    }
    cout<<"Fin de ingreso de sucursales --------. "<<endl;
    //Punto A
    cout<<"El numero de sucursal con mayor porcentaje fue: "<<maxSuc<<endl;
    //Punto B
    cout<<"El cliente con mayor saldo fue: "<<maxNcli<<" y pertenecia a la sucursal: "<<sucPtoB;
}










