#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>

int main() {
    auto cuadrado = [](int x) { return x * x; };

    auto numero = 5;
    auto resultado = cuadrado(numero);

    std::cout << "El cuadrado de " << numero << " es: " << resultado << std::endl;

    std::vector<int> numeros = {1, 2, 3, 4, 5};

    std::cout << "Cuadrados de los números en el contenedor:" << std::endl;
    std::for_each(numeros.begin(), numeros.end(), [](int x) {
        std::cout << x << ": " << x * x << std::endl;
    });

    std::unique_ptr<int> punteroEntero = std::make_unique<int>(10);

    std::cout << "Valor a través del puntero inteligente: " << *punteroEntero << std::endl;

    return 0;
}

