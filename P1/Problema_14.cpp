#include <iostream>

// Función para verificar si un número es palíndromo
bool esPalindromo(int numero) {
    int original = numero;
    int invertido = 0;

    // Invertimos el número
    while (numero > 0) {
        int digito = numero % 10;  // Extraemos el último dígito
        invertido = invertido * 10 + digito;  // Agregamos el dígito al número invertido
        numero /= 10;  // Eliminamos el último dígito
    }

    // Verificamos si el número original es igual al invertido
    return original == invertido;
}

int main() {
    int mayorPalindromo = 0;
    int num1 = 0, num2 = 0;

    // Probar todos los productos de números de 3 dígitos
    for (int i = 100; i <= 999; i++) {
        for (int j = i; j <= 999; j++) {  // Evitamos productos duplicados empezando desde 'i'
            int producto = i * j;

            // Si el producto es un palíndromo y es mayor que el mayor encontrado
            if (esPalindromo(producto) && producto > mayorPalindromo) {
                mayorPalindromo = producto;
                num1 = i;
                num2 = j;
            }
        }
    }

    // Imprimimos el resultado
    std::cout << num1 << " * " << num2 << " = " << mayorPalindromo << std::endl;

    return 0;
}
