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
    example.erase(0, dot + 1);
    
    ipAddress.port = std::stoi(example);
    
    return ipAddress;
}
