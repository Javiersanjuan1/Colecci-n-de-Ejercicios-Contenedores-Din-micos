#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Crear un vector de enteros
    std::vector<int> miVector = {5, 2, 8, 1, 3};

    // Utilizar la función sort para ordenar el vector
    std::sort(miVector.begin(), miVector.end());

    // Mostrar el vector ordenado
    std::cout << "Vector ordenado:" << std::endl;
    for (const auto &elemento : miVector) {
        std::cout << elemento << " ";
    }
    std::cout << std::endl;

    // Utilizar la función max_element para encontrar el elemento más grande
    auto maxElemento = std::max_element(miVector.begin(), miVector.end());

    // Mostrar el elemento más grande
    std::cout << "El elemento más grande es: " << *maxElemento << std::endl;

    return 0;
}
