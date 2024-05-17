#include <iostream>
using namespace std;

int main(){
/*
[*]declaro 3 variables(float)
[*]ingreso los dos valores
[*]pregunto si el denominador es = a 0
[*]si si, reingreso el denominador
[*]muestro cada una de las operaciones
*/
float primerNumero;
float segundoNumero;

cout << "ingrese el primer numero: ";
cin >> primerNumero;

cout << "ingrese el segundo numero: ";
cin >> segundoNumero;

cout << "suma: " << primerNumero + segundoNumero << endl;


cout << "resta: " << primerNumero - segundoNumero << endl;


cout << "multiplicacion: " << primerNumero * segundoNumero << endl;


if(segundoNumero == 0){
    while (segundoNumero == 0){
       cout << "para la division, ingrese el segundo numero con un valor distinto a cero: ";
cin >> segundoNumero;
    }
}
cout << "division: " << primerNumero / segundoNumero << endl;

return 0;
}
