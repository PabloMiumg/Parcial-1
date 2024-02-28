#include <iostream>
using namespace std;

int main() {
   
    int n, suma = 0;

    
    cout << "Ingrese un numero entero positivo n: ";
    cin >> n;

   
    if (n <= 0) {
        std::cout << "Ingrese un numero entero positivo." << std::endl;
        return 1; 
    }

   
    for (int i = 1; i <= n; ++i) {
        suma += i;
    }


    std::cout << "La suma del numero entero desde 1 hasta " << n << " es: " << suma << std::endl;

    return 0;
}
