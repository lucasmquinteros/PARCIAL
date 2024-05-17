#include <iostream>
using namespace std;

int main(){

/*
[*]declaro e ingreso el anio
[*]pregunto si es divisible por 4
[*]si es divisible por 4 pregunto si NO es divisible por 100
[*] si se cumplen las dos condiciones muestro, sino:
[*]  PREGUNTO si es divisible por 400, si si muestro
[*]sino muestro que no
*/
int anio;

cout << "ingrese el anio ";
cin >> anio;

if(anio % 4 == 0){
    if(anio % 100 != 0){
        cout << anio << " es bisiesto";
    }
    else if(anio % 400 == 0){
        cout << anio << " es bisiesto";
    }
}
else {
    cout << anio << " no es bisiesto";
}

    return 0;
}
