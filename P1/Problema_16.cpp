#include <iostream>

int main() {
    int limiteSuperior;
    std::cout << "Ingresa el valor de k (límite superior): ";
    std::cin >> limiteSuperior;

    int semillaConSerieMasLarga = 0;
    int longitudMaximaSerie = 0;

    // Iteramos sobre cada número desde 1 hasta limiteSuperior - 1
    for (int semilla = 1; semilla < limiteSuperior; ++semilla) {
        int numeroActual = semilla;
        int longitudSerieActual = 1;  // Contamos la semilla inicial como el primer término

        // Calculamos la serie de Collatz para la semilla actual
        while (numeroActual != 1) 
        {
            std::cout << numeroActual <<std::endl;
            if (numeroActual % 2 == 0) {
                numeroActual = numeroActual / 2;  // Si es par, lo dividimos entre 2
            } else {
                numeroActual = 3 * numeroActual + 1;  // Si es impar, aplicamos 3n + 1
            }
            longitudSerieActual++;  // Incrementamos la longitud de la serie
            
        }

        // Verificamos si la longitud de esta serie es la más larga que hemos encontrado
        if (longitudSerieActual > longitudMaximaSerie) {
            longitudMaximaSerie = longitudSerieActual;
            semillaConSerieMasLarga = semilla;  // Actualizamos la semilla con la serie más larga
        }
    }

    // Mostramos el resultado
    std::cout << "La serie mas larga es con la semilla: " << semillaConSerieMasLarga
              << ", teniendo " << longitudMaximaSerie << " terminos.\n";

    return 0;
}
