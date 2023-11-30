#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> miVector = {5, 2, 8, 1, 3};

    std::sort(miVector.begin(), miVector.end());

    std::cout << "Vector ordenado:" << std::endl;
    for (const auto &elemento : miVector) {
        std::cout << elemento << " ";
    }
    std::cout << std::endl;

    auto maxElemento = std::max_element(miVector.begin(), miVector.end());

    std::cout << "El elemento más grande es: " << *maxElemento << std::endl;

    return 0;
}
