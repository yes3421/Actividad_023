/*
 * Actividad Integral estructura de datos lineales
 *
 * Actividad 2.3
 *
 * Fernando Gabriel Gutiérrez Madrigal A01424790
 * Omar Adalid Macías Mayorquín A01635795
 * Paul Enrique Alonso Ramírez A01634608
 * Programación de estructuras de datos y algoritmos fundamentales
 * Grupo 614
 * Equipo 5
 * Tecnológico de Monterrey, Campus Guadalajara
 * 10 de octubre de 2022
 */
 
#include <cstdlib>
#include <iostream>

#include "LecturaBitacora.h"
#include "LinkedList.h"

int main(int argc, char* argv[])
{
    LinkedList records;

    lecturaBitacora(records);

    records.insertionSort();

    records.writeFile();

    std::string initialIP;
    std::string finalIP;
    std::string respuesta;

    do {
        std::cout << "Ingrese la IP inicial: ";
        std::cin >> initialIP;

        std::cout << "Ingrese la IP final: ";
        std::cin >> finalIP;

        records.sequentialSearch(initialIP, finalIP);

        std::cout << "Desea realizar otra búsqueda? [Y/n] ";
        std::cin >> respuesta;  
    } while (respuesta != "n");

    return EXIT_SUCCESS;
}
