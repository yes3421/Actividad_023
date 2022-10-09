#include <cstdlib>
#include <iostream>

#include "LecturaBitacora.h"
#include "LinkedList.h"

int main(int argc, char* argv[])
{
    LinkedList records;

    lecturaBitacora(records);

    std::cout << records << '\n';

    return EXIT_SUCCESS;
}
