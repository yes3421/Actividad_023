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

#ifndef CAST_H
#define CAST_H

#include <string>

struct IPAddressType {
    int octet1 = 0;
    int octet2 = 0;
    int octet3 = 0;
    int octet4 = 0;
};

IPAddressType strToIP(std::string example);
std::string IPToStr(IPAddressType IPAddress);

#endif
