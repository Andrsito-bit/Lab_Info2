#include <iostream>

int main() {
    int numero;
    std::cout << "Ingresa un número: ";
    std::cin >> numero;

    int mayorFactorPrimo = 1;  // Inicialmente, asumimos que el mayor factor primo es 1

    // Dividimos por 2 tantas veces como sea posible
    while (numero % 2 == 0) {
        mayorFactorPrimo = 2;
        numero /= 2;
    }

    // Dividimos por todos los números impares, empezando desde 3
    for (int i = 3; i * i <= numero; i += 2) {
        while (numero % i == 0) {
            mayorFactorPrimo = i;
            numero /= i;
        }
    }

    // Si el número resultante es mayor que 2, entonces es un factor primo mayor
    if (numero > 2) {
        mayorFactorPrimo = numero;
    }

    // Imprimimos el mayor factor primo encontrado
    std::cout << "El mayor factor primo es: " << mayorFactorPrimo << std::endl;

    return 0;
}
