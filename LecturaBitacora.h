#ifndef LECTURABITACORA_H
#define LECTURABITACORA_H

#include <string>
#include <fstream>
#include <sstream>

#include "Record.h"
#include "Mapas.h"
#include "LinkedList.h"

void lecturaBitacora(LinkedList& linkedList)
{
    std::ifstream input("bitacora.txt");
    std::string line;
    std::string word;
    std::string month;

    while (std::getline(input, line)) {
        Record record;

        std::istringstream log(line);

        log
        >> month
        >> record.day
        >> record.hour
        >> record.IPAddress;

        record.month = monthToInt[month];

        while (log >> word) {
            record.failure += word + " ";
        }

        linkedList.insertLast(record);
    }
}

#endif
