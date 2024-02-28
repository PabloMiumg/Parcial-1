#include <iostream>
using namespace std;

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }

    for (int i = 2; i <= numero / 2; ++i) {
        if (numero % i == 0) {
            return false; 
        }
    }

    return true;
}

int main() {
   
    int numero;

    
    std::cout << "Ingrese un numero entero: ";
    std::cin >> numero;

 
    if (esPrimo(numero)) {
        std::cout << numero << " es un numero primo." << std::endl;
    } else {
        std::cout << numero << " no es un numero primo." << std::endl;
    }

    return 0;
}
