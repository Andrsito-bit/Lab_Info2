#include <iostream>

// Escriba un programa para leer dos números enteros con el siguiente significado: el
// valor del primer número representa una hora del día en un reloj de 24 horas, de modo que 1245
// representa las doce y cuarenta y cinco de la tarde. El segundo entero representa un tiempo de 
// duración de la misma manera, por lo que 345 representa tres horas y 45 minutos. El programa debe
// sumar esta duración primer número, y el resultado será impreso en la misma notación, en este caso
// 1630, que es el tiempo de 3 horas y 45 minutos después de 12:45.

int main() {
    int hora_inicial, duracion;
    int hora, minuto;
    int horas_duracion, minutos_duracion;

    // Bucle para pedir la hora inicial hasta que sea válida
    while (true)
    {
        std::cout << "Ingrese la hora inicial (formato hhmm): ";
        std::cin >> hora_inicial;

        hora = hora_inicial / 100;
        minuto = hora_inicial % 100;

        if (hora >= 0 && hora <= 23 && minuto >= 0 && minuto <= 59)
        {
            break;  // Salir del bucle si la hora es válida
        } 
        
        else 
        
        {
            std::cout << hora_inicial << " es un tiempo invalido. Intentalo de nuevo." << std::endl;
        }
    }

    // Bucle para pedir la duración hasta que sea válida
    while (true) 
    {
        std::cout << "Ingrese la duracion (formato hhmm): ";
        std::cin >> duracion;

        horas_duracion = duracion / 100;
        minutos_duracion = duracion % 100;

        if (horas_duracion >= 0 && minutos_duracion >= 0 && minutos_duracion <= 59) 
        
        {
            break;  // Salir del bucle si la duración es válida
        } 
        
        else 
        
        {
            std::cout << duracion << " es un tiempo invalido. Intentalo de nuevo." << std::endl;
        }
    }

    // Sumar los minutos y manejar si se pasa de 60
    int nuevo_minuto = minuto + minutos_duracion;
    int horas_adicionales = nuevo_minuto / 60;
    nuevo_minuto = nuevo_minuto % 60; // Ajustar minutos al rango 0-59

    // Sumar las horas y ajustar al formato 24 horas
    int nueva_hora = (hora + horas_duracion + horas_adicionales) % 24;

    // Imprimir el resultado en formato hhmm
    std::cout << "La hora es " << (nueva_hora < 10 ? "0" : "") << nueva_hora  
    << (nuevo_minuto < 10 ? "0" : "") << nuevo_minuto << std::endl;

    return 0;
}