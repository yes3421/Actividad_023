#ifndef CAST_H
#define CAST_H

#include <string>

struct IPAddressType {
    int octet1 = 0;
    int octet2 = 0;
    int octet3 = 0;
    int octet4 = 0;
    int port = 0;
};

IPAddressType strToIP(std::string example);

#endif
