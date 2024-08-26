#include <iostream>

// La serie de Collatz se conforma con la siguiente regla: sea n un elemento de la serie,
// si n es par, el siguiente elemento es n/2, y si n es impar, el siguiente elemento es 3n+1.
// Escriba un programa que reciba un número k y calcule cual es el elemento inicial j (semilla), menor
// que k, que produce la serie más larga y diga cuantos términos m tiene la serie

int main() 
{
    int limiteSuperior;
    std::cout << "Ingresa el valor del numero : ";
    std::cin >> limiteSuperior;

    int semillaConSerieMasLarga = 0;
    int longitudMaximaSerie = 0;

    // Iteramos sobre cada número desde 1 hasta limiteSuperior - 1
    for (int semilla = 1; semilla < limiteSuperior; ++semilla) 
    {
        int numeroActual = semilla;
        int longitudSerieActual = 1;  // Contamos la semilla inicial como el primer término

        // Calculamos la serie de Collatz para la semilla actual
        while (numeroActual != 1) 
        {
            std::cout << numeroActual <<std::endl;
            if (numeroActual % 2 == 0) 
            {
                numeroActual = numeroActual / 2;  // Si es par, lo dividimos entre 2
            } else 
            {
                numeroActual = 3 * numeroActual + 1;  // Si es impar, aplicamos 3n + 1
            }
            longitudSerieActual++;  // Incrementamos la longitud de la serie
            
        }

        // Verificamos si la longitud de esta serie es la más larga que hemos encontrado
        if (longitudSerieActual > longitudMaximaSerie)
        {
            longitudMaximaSerie = longitudSerieActual;
            semillaConSerieMasLarga = semilla;  // Actualizamos la semilla con la serie más larga
        }
    }

    // Mostramos el resultado
    std::cout << "La serie mas larga es con la semilla: " << semillaConSerieMasLarga
            << ", teniendo " << longitudMaximaSerie << " terminos.\n";

    return 0;
}
