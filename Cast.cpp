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
 
#include "Cast.h"

IPAddressType strToIP(std::string example)
{   
    IPAddressType ipAddress;
    
    int dot = example.find('.');  
    ipAddress.octet1 = std::stoi(example.substr(0, dot));
    example.erase(0, dot + 1);
    
    dot = example.find('.');
    ipAddress.octet2 = std::stoi(example.substr(0, dot));
    example.erase(0, dot + 1);
    
    dot = example.find('.');
    ipAddress.octet3 = std::stoi(example.substr(0, dot));
    example.erase(0, dot + 1);
    
    dot = example.find(':');
    ipAddress.octet4 = std::stoi(example.substr(0, dot));
    example.erase();
    
    return ipAddress;
}

std::string IPToStr(IPAddressType IPAddress)
{
    std::string ip = std::to_string(IPAddress.octet1) + "." 
    + std::to_string(IPAddress.octet2) + "." 
    + std::to_string(IPAddress.octet3) + "." + std::to_string(IPAddress.octet4);

    return ip;
}
