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
