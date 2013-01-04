#pragma once
#include "object.h"

class TTest: public TObject
{
public:
    TTest() {
        _(Host) = "127.0.0.1";
        _(Port) = 80;
        _(Timeout) = 10;
    }
    void SayAddr() {
        std::cout << _(Host) << ":" << _(Port) << "\n";
        _(Response) = "asdfasdf";
    }
};
