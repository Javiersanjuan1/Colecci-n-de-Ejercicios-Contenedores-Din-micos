#include <iostream>
#include <vector>

int main() {
    // Crear un vector de
    std::vector<int> miVector;

    miVector.push_back(1);
    miVector.push_back(2);
    miVector.push_back(3);
    miVector.push_back(4);
    miVector.push_back(5);

    // Utilizar un iterador para recorrer y mostrar cada elemento del vector
    std::cout << "Elementos del vector:" << std::endl;
    for (std::vector<int>::iterator it = miVector.begin(); it != miVector.end(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
