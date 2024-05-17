#include <iostream>
using namespace std;

int main(){
/*
[*]solicito y pregunto si es positivo
[*]pregunto si es 0 o 1, si es muestro 1
[*]si es mayor comienzo un ciclo for en marcha atras iterando desde 5 a 1

*/
int numero;
unsigned long long numeroFactoriado = 1;

cout << "ingrese el numero: ";
cin >> numero;

while (numero < 0){
    cout << "ingrese un numero entero positivo: ";
    cin >> numero;
}
numeroFactoriado = numero;
if (numero == 1 || numero == 0){
    cout << 1;
}
else{
    for(int i = numero-1; i <= numero; i--){
       numeroFactoriado = (numeroFactoriado * i);
        if(i == 1){
            break;
        }
    }
     cout << numeroFactoriado << endl;
}



return 0;
}
