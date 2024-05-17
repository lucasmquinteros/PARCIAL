#include <iostream>
#include <iomanip>
using namespace std;

int main(){

/*
[*]declaro variables 38 variables, Cantidad materias,string materia, nota, ponderacion, acomulador?, acomuladorNota?
[*]ingreso cantidad de materias
[*]en ciclo for hasta la cantidad de materias ingresadas
[*]ingreso materia, nota, ponderacion
[*]acomulo las ponderaciones
[*]acomulo las notas * ponderaciones
[*] termina el for, CALCULO promedio ponderado
[*] muestro con los requisitos
muestro??
*/


int cantidadMaterias;
string materia;
double nota;
double ponderacion;
double acomuladorPonderacion;
double acomuladorNota;
float promedioPonderado;

cout << "ingrese cuantas materias a considerar: ";
cin >> cantidadMaterias;


for (int i = 0; i <cantidadMaterias; i++){
    cout << "ingrese la materia: ";
    cin >> materia;
    cout << "ingrese la nota: ";
    cin >> nota;
    cout << "ingrese la ponderacion: ";
    cin >> ponderacion;
        acomuladorPonderacion = acomuladorPonderacion + ponderacion;
        acomuladorNota = acomuladorNota + (nota * ponderacion);
}
promedioPonderado = acomuladorNota / acomuladorPonderacion;

cout << "Promedio ponderado: " << fixed << setprecision(2) << promedioPonderado;


return 0;
}
