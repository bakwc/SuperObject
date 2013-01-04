#pragma once
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <ctime>
#include <cstdio>
#include <cstdlib>
#include <sstream>
#include <memory>

#include "value.h"

#define _(value) (*this)[#value]

class TObject: public std::map<std::string, TValue> {
public:
    bool Has(const std::string& key) {
        return find(key) != end();
    }
};
