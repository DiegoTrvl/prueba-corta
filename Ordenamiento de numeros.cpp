#include <iostream>
#include <vector>

int main() {

    std::vector<int> numeros;
    int num;
    std::cout << "Ingresa los numeros (termina con -1): ";
    while (std::cin >> num && num != -1) {
        numeros.push_back(num);
    }

    for (int i = 0; i < numeros.size(); i++) {
        for (int j = 0; j < numeros.size() - i - 1; j++) {
            if (numeros[j] > numeros[j + 1]) {
                std::swap(numeros[j], numeros[j + 1]);
            }
        }
    }

    std::cout << "Numeros ordenados: ";
    for (int num : numeros) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
