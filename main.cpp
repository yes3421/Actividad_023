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

    // Ordenar por ip

    // Solicitar las ip

    // Desplegar y guardar archivo

    records.sequentialSearch("70.16.722.45:5886", "322.17.842.98:4254");

    return EXIT_SUCCESS;
}
