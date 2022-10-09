#ifndef RECORD_H
#define RECORD_H

#include <string>

struct Record {
    int month = 0;
    int day = 0;
    std::string hour;
    std::string IPAddress;
    std::string failure;
};

#endif
