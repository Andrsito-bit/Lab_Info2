#include <iostream>

// Problema 2. Se necesita un programa que permita determinar la mínima combinación de billetes
// y monedas para una cantidad de dinero determinada. Los billetes en circulación son de $50.000,
// $20.000, $10.000, $5.000, $2.000 y $1.000, y las monedas son de $500, $200, $100 y $50.
// Hacer un programa que entregue el número de billetes y monedas de cada denominación
// para completar la cantidad deseada. Si por medio de los billetes y monedas disponibles
// no se puede lograr la cantidad deseada, el sistema deberá decir lo que resta para lograrla 

int main()
{ 
    // Definir las denominaciones de billetes y monedas
    const int BILLETE_50000 = 50000;
    const int BILLETE_20000 = 20000;
    const int BILLETE_10000 = 10000;
    const int BILLETE_5000 = 5000;
    const int BILLETE_2000 = 2000;
    const int BILLETE_1000 = 1000;
    const int MONEDA_500 = 500;
    const int MONEDA_200 = 200;
    const int MONEDA_100 = 100;
    const int MONEDA_50 = 50;

    // Solicitar la cantidad de dinero
    int cantidad;
    std::cout << "Ingrese la cantidad de dinero: ";
    std::cin >> cantidad;

    // Calcular la cantidad de cada denominación
    int cantidad_50000 = cantidad / BILLETE_50000;
    cantidad = cantidad % BILLETE_50000;

    int cantidad_20000 = cantidad / BILLETE_20000;
    cantidad = cantidad % BILLETE_20000;

    int cantidad_10000 = cantidad / BILLETE_10000;
    cantidad = cantidad % BILLETE_10000;

    int cantidad_5000 = cantidad / BILLETE_5000;
    cantidad = cantidad % BILLETE_5000;

    int cantidad_2000 = cantidad / BILLETE_2000;
    cantidad = cantidad % BILLETE_2000;

    int cantidad_1000 = cantidad / BILLETE_1000;
    cantidad = cantidad % BILLETE_1000;

    int cantidad_500 = cantidad / MONEDA_500;
    cantidad = cantidad % MONEDA_500;

    int cantidad_200 = cantidad / MONEDA_200;
    cantidad = cantidad % MONEDA_200;

    int cantidad_100 = cantidad / MONEDA_100;
    cantidad = cantidad % MONEDA_100;

    int cantidad_50 = cantidad / MONEDA_50;
    cantidad = cantidad % MONEDA_50;

    // Mostrar los resultados
    std::cout << "50000 : " << cantidad_50000 << std::endl;
    std::cout << "20000 : " << cantidad_20000 << std::endl;
    std::cout << "10000 : " << cantidad_10000 << std::endl;
    std::cout << "5000  : " << cantidad_5000 << std::endl;
    std::cout << "2000  : " << cantidad_2000 << std::endl;
    std::cout << "1000  : " << cantidad_1000 << std::endl;
    std::cout << "500   : " << cantidad_500 << std::endl;
    std::cout << "200   : " << cantidad_200 << std::endl;
    std::cout << "100   : " << cantidad_100 << std::endl;
    std::cout << "50    : " << cantidad_50 << std::endl;
    std::cout << "Faltante: " << cantidad << std::endl;

    return 0;
}
