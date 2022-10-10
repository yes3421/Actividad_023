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
