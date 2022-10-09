#ifndef MAPAS_H
#define MAPAS_H

#include <map>
#include <string>

// Mapa para equivalencia entre mes y entero.
std::map<std::string, int> monthToInt{
    {"Jan", 0}, {"Feb", 1},
    {"Mar", 2}, {"Apr", 3},
    {"May", 4}, {"Jun", 5},
    {"Jul", 6}, {"Aug", 7},
    {"Sep", 8}, {"Oct", 9},
    {"Nov", 10}, {"Dec", 11},
};

// Mapa para equivalencia entre entero y mes.
std::map<int, std::string> intToMonth{
    {0, "Jan"}, {1, "Feb"},
    {2, "Mar"}, {3, "Apr"},
    {4, "May"}, {5, "Jun"},
    {6, "Jul"}, {7, "Aug"},
    {8, "Sep"}, {9, "Oct"},
    {10, "Nov"}, {11, "Dec"},
};

#endif
