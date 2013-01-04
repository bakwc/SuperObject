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

class TObject;

class TValue {
public:
    TValue();
    ~TValue();
    TValue(const TValue& value);
    void operator = (const TValue& value);
    inline void operator = (int num) {
        std::stringstream s;
        s << num;
        Data = s.str();
    }
    inline void operator = (const std::string& v) {
        Data = v;
    }
    void operator = (const TObject& v);
    operator int() {
        std::stringstream s(Data);
        int res;
        s >> res;
        return res;
    }
    inline operator std::string() {
        return Data;
    }
    TValue& operator [](const char* key);
    TValue& operator [](const std::string& key);
    inline void Add(int v) {
        TValue val;
        val = v;
        Values.push_back(val);
    }
    void Add(const TObject& object);
    inline TValue& operator [](int index) {
        return Values[index];
    }
private:
    std::string Data;
    TObject* Object;
    std::vector<TValue> Values;
};

bool operator == (const TValue& val, const TObject& object);
