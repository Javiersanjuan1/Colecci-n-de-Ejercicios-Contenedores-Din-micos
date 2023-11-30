#include <iostream>
#include <list>
#include <stack>

int main() {
    // Crear una lista de números decimales
    std::list<double> miLista = {1.1, 2.2, 3.3, 4.4, 5.5};

    // Crear un adaptador de secuencia (stack) utilizando la lista
    std::stack<double, std::list<double>> miPila(miLista);

    // Mostrar los elementos originales de la lista
    std::cout << "Elementos originales de la lista:" << std::endl;
    for (const auto &elemento : miLista) {
        std::cout << elemento << " ";
    }
    std::cout << std::endl;

    // Operación push en la pila
    miPila.push(6.6);

    // Mostrar los elementos de la pila después de push
    std::cout << "Elementos de la pila después de push:" << std::endl;
    while (!miPila.empty()) {
        std::cout << miPila.top() << " ";
        miPila.pop();
    }
    std::cout << std::endl;

    return 0;
}
