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

#include "Compare.h"

bool compare(IPAddressType& ip1, IPAddressType& ip2)
{
    if (ip1.octet1 == ip2.octet1) {
        if (ip1.octet2 == ip2.octet2) {
            if (ip1.octet3 == ip2.octet3) {
                if (ip1.octet4 == ip2.octet4) {
                    if (ip1.port > ip2.port) {
                        return true;
                    }
                    else {
                        return false;
                    }
                }
                else if (ip1.octet4 > ip2.octet4) {
                    return true;
                }
                else {
                    return false;
                }
            }
            else if (ip1.octet3 > ip2.octet3) {
                return true;
            }
            else {
                return false;
            }
        }
        else if (ip1.octet2 > ip2.octet2) {
            return true;
        }
        else {
            return false;
        }
    }
    else if (ip1.octet1 > ip2.octet1) {
        return true;
    }
    else {
        return false;
    }
}
