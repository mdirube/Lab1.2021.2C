///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;
/*
La clínica Saint Simon registró las últimas cuatro atenciones recibidas por sus pacientes. Por cada registro de atención se almacena:
Código de paciente (entero)
Hora de la atención (entero entre 0 y 23)
Cantidad de remedios recetados (entero)
Tipo de atención ('C' - Clínica, 'T'- Traumatológica)

Los datos están agrupados por paciente. No se sabe la cantidad de pacientes incluídos en la muestra, ya que se incluyó a los que tenían al menos cuatro atenciones. Para indicar la finalización de carga de datos se ingresa un código de paciente negativo.

Se pide calcular e informar:
a) Por cada paciente, la cantidad de atenciones recibidas por la mañana (hasta la hora 12 incluída). Listar el código de paciente y la cantidad de atenciones..
b) El código de paciente al que se le haya recetado la menor cantidad de remedios entre todas las atenciones. Indicar el código de paciente y la cantidad total de remedios..
c) El porcentaje de atenciones clínicas y el porcentaje de atenciones traumatológicas entre todos los pacientes.
d) La cantidad de atenciones traumatológicas realizadas por la noche (entre las 20 y las 23) .
*/


int main(){
    int i, codigoPaciente, hora, cantidadRemedios;
    char tipoAtencion;
    ///punto 1
    int cantidadAtenciones;
    ///punto 2
    int cantidadMenor, codigoPacienteMenor;
    bool primero=true;
    ///punto 3
    float porcentajeClinicas, porcentajeTraumas;
    int totalClinicas=0, totalTraumas=0;
    ///punto4
    int totalAtencionesTraumaNoche=0;
    cout<<"CODIGO PACIENTE: ";
    cin>>codigoPaciente;
    while(codigoPaciente>=0){
        cantidadAtenciones=0;
        for(i=1;i<=4;i++){
            cout<<"HORA: ";
            cin>>hora;
            cout<<"CANTIDAD DE REMEDIOS: ";
            cin>>cantidadRemedios;
            cout<<"TIPO DE ATENCION: ";
            cin>>tipoAtencion;
            ///punto 1
            if(hora<=12){
                cantidadAtenciones++;
            }
            ///punto 2
            if(primero==true){
                cantidadMenor=cantidadRemedios;
                codigoPacienteMenor=codigoPaciente;
                primero=false;
            }
            else{
                if(cantidadRemedios<cantidadMenor){
                        cantidadMenor=cantidadRemedios;
                        codigoPacienteMenor=codigoPaciente;
                }
            }
            ///punto 3
            if(tipoAtencion=='C') totalClinicas++;
            else totalTraumas++;
            ///punto 4
            if(tipoAtencion=='T' && hora>=20 && hora<=23) totalAtencionesTraumaNoche++;
        }
        ///punto 1
        cout<<"PACIENTE: "<<codigoPaciente<<"\t";
        cout<<"CANTIDAD DE ATENCIONES HASTA LAS 12 "<<cantidadAtenciones<<endl;

        cout<<"CODIGO PACIENTE: ";
        cin>>codigoPaciente;
    }
    ///punto 2
    cout<<"LA CANTIDAD MENOR DE REMEDIOS RECETADOS FUE DE "<<cantidadMenor<<" AL PACIENTE "<<codigoPacienteMenor<<endl;
    ///punto 3
    porcentajeClinicas=(float)totalClinicas/(totalClinicas+totalTraumas)*100;
    porcentajeTraumas=(float)totalTraumas/(totalClinicas+totalTraumas)*100;
    cout<<"PORCENTAJE DE ATENCIONES CLINICAS: "<<porcentajeClinicas<<endl;
    cout<<"PORCENTAJE DE ATENCIONES TRAUMATOLOGICAS: "<<porcentajeTraumas<<endl;
    ///punto 4
    cout<<"TOTAL DE ATENCIONES TRAUMATOLOGICAS DE NOCHE: "<<totalAtencionesTraumaNoche<<endl;

	cout<<endl;
	system("pause");
	return 0;
}
