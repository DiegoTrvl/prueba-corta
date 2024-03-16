#include <iostream>
#include <vector>
#include <set>

int main() {
    std::vector<int> numeros;
    int num;
    std::cout << "Ingresa los numeros (termina con -1 para parar ): ";
    while (std::cin >> num && num != -1) {
        numeros.push_back(num);
    }
    std::set<int> setNumeros(numeros.begin(), numeros.end());
    numeros.assign(setNumeros.begin(), setNumeros.end());

    std::cout << "Numeros sin repeticion: ";
    for (int num : numeros) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
