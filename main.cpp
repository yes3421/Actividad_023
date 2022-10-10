#include <cstdlib>
#include <iostream>

#include "LecturaBitacora.h"
#include "LinkedList.h"

int main(int argc, char* argv[])
{
    LinkedList records;

    lecturaBitacora(records);

    records.writeFile();

    // Ordenar por ip

    // Generar archivo

    // Solicitar las ip

    // Desplegar y guardar archivo

    return EXIT_SUCCESS;
}
