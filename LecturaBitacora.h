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
