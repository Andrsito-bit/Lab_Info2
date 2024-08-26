#include <iostream>

// Escriba un programa que reciba un número n e imprima el enésimo número primo.
// Ej: Si recibe 4 el programa debe imprimir 7.

int main() 
{
    int n;
    std::cout << "Ingresa un numero n: ";
    std::cin >> n;

    int contadorPrimos = 0;  // Contador de números primos encontrados
    int numero = 2;  // Comenzamos desde el primer número primo (2)

    // Bucle para encontrar el enésimo número primo
    while (contadorPrimos < n) 
    {
        int divisores = 0;  // Contador de divisores del número actual

        // Verificamos si el número es primo
        for (int i = 1; i <= numero; i++) 
        {
            if (numero % i == 0) 
            {
                divisores++;  // Contamos los divisores de `numero`
            }
        }

        // Un número es primo si tiene exactamente 2 divisores: 1 y él mismo
        if (divisores == 2) 
        {
            contadorPrimos++;  // Incrementamos el contador si es primo
        }

        if (contadorPrimos < n) 
        {
            numero++;  // Continuamos buscando el siguiente número
        }
    }

    // Imprimimos el resultado
    std::cout << "El primo numero " << n << " es: " << numero << std::endl;

    return 0;
}
