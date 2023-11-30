#include <iostream>
#include <list>
#include <stack>

int main() {
    std::list<double> miLista = {1.1, 2.2, 3.3, 4.4, 5.5};

    std::stack<double, std::list<double>> miPila(miLista);

    std::cout << "Elementos originales de la lista:" << std::endl;
    for (const auto &elemento : miLista) {
        std::cout << elemento << " ";
    }
    std::cout << std::endl;

    miPila.push(6.6);

    std::cout << "Elementos de la pila después de push:" << std::endl;
    while (!miPila.empty()) {
        std::cout << miPila.top() << " ";
        miPila.pop();
    }
    std::cout << std::endl;

    return 0;
}
