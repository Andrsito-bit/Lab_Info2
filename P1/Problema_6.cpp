#include <iostream>

int factorial(int n) // hacemos una funcion que calcule la factorial de un numero ingresado
{
    int resultado = 1;
    for (int i = 1; i <= n; i++) 
    {
        resultado = resultado * i; 
    }
    return resultado;
}

int main() 
{
    int num_terminos;
    std::cout << "Ingresa el numero de terminos para la aproximacion: ";
    std::cin >> num_terminos;

    double e_aproximado = 1.0;  // Inicia en 1 porque 1/0! es 1.

    // Calcula la suma de los terminos de la serie.
    for (int i = 1; i < num_terminos; i++) 
    {
        e_aproximado += 1.0 / factorial(i);
    }

    // Imprime el resultado
    std::cout << "e es aproximadamente: " << e_aproximado << std::endl;

    return 0;
}
