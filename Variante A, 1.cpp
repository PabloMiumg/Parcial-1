#include <iostream>
using namespace std;
int main() {
    int a, b;

  
    cout << "Ingrese el valor de a: ";
    cin >> a;

    cout << "Ingrese el valor de b: ";
    cin >> b;

    cout << "Suma: " << a + b << std::endl;
    cout << "Resta: " << a - b << std::endl;
    cout << "Multiplicacion: " << a * b << std::endl;

 
    if (b != 0) {
        cout << "Division: " << static_cast<double>(a) / b << std::endl;
    } else {
        cout << "No se puede dividir dentro de cero." << std::endl;
    }

    return 0;
}

