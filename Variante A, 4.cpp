#include <iostream>
#include <cmath>
using namespace std; 
int main() {
   
    double numero, raizCuadrada;

    
    cout << "Ingrese un numero para calcular su raiz cuadrada: ";
    cin >> numero;

   
    raizCuadrada = sqrt(numero);

   
    cout << "La raiz cuadrada de " << numero << " es: " << raizCuadrada << std::endl;

    return 0;
}


