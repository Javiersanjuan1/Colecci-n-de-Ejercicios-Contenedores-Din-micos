#include <iostream>
#include <valarray>

int main() {
    std::valarray<double> valArray1 = {1.0, 2.0, 3.0, 4.0, 5.0};
    std::valarray<double> valArray2 = {2.0, 2.0, 2.0, 2.0, 2.0};

    std::valarray<double> suma = valArray1 + valArray2;

    std::cout << "Suma: ";
    for (const auto &elemento : suma) {
        std::cout << elemento << " ";
    }
    std::cout << std::endl;

    std::valarray<double> resta = valArray1 - valArray2;

    std::cout << "Resta: ";
    for (const auto &elemento : resta) {
        std::cout << elemento << " ";
    }
    std::cout << std::endl;

    std::valarray<double> multiplicacion = valArray1 * valArray2;

    std::cout << "Multiplicación: ";
    for (const auto &elemento : multiplicacion) {
        std::cout << elemento << " ";
    }
    std::cout << std::endl;

    std::valarray<double> division = valArray1 / valArray2;

    std::cout << "División: ";
    for (const auto &elemento : division) {
        std::cout << elemento << " ";
    }
    std::cout << std::endl;

    return 0;
}
