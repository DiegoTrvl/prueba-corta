#include <iostream>
#include <vector>

int main() {
    // Vector predefinido
    std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Solicitar al usuario ingresar un número
    int num;
    std::cout << "Por favor, ingresa un numero: ";
    std::cin >> num;

    // Buscar el número en el vector
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == num) {
            std::cout << "El numero " << num << " esta presente en el vector en la posicion " << i << ".\n";
            return 0;
        }
    }

    // Si el número no se encuentra en el vector
    std::cout << "El numero " << num << " no esta presente en el vector.\n";

    return 0;
}
