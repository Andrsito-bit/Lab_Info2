#include <iostream>

// Escriba un programa que reciba 3 números a, b, c, y calcule la suma de todos los
// múltiplos de a y b que sean menores a c. Tenga en cuenta no sumar 2 veces los múltiplos comunes.
// Ej: para a=3, b=5 y c=10. Se sumarían 3+6+9+5=23
// Para a=5, b=7 y c=36. Se sumarían 5+10+15+20+25+30+35+7+14+21+28 = 210.

int main() {
    int a, b, c;
    std::cout << "Ingresa el valor de a: ";
    std::cin >> a;
    std::cout << "Ingresa el valor de b: ";
    std::cin >> b;
    std::cout << "Ingresa el valor de c: ";
    std::cin >> c;

    int sumaTotal = 0;

    std::cout << "Los múltiplos son: ";

    // Recorremos todos los números menores que c
    for (int i = 1; i < c; i++) {
        // Verificamos si el número es múltiplo de a o de b
        if (i % a == 0 || i % b == 0) 
        {
            // Imprimimos el múltiplo
            std::cout << i;

            // Evitamos imprimir el '+' al final de la lista
            if (i + 1 < c) 
            {
                std::cout << " + ";
            }

            // Sumamos el múltiplo a la suma total
            sumaTotal += i;
        }
    }

    // Imprimimos la suma total
    std::cout << " = " << sumaTotal << std::endl;

    return 0;
}
