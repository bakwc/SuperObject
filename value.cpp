#include "object.h"
#include "value.h"

TValue::TValue() {
    Object = new TObject();
}

TValue::TValue(const TValue& value) {
    Data = value.Data;
    Values = value.Values;
    Object = new TObject();
    *Object = *(value.Object);
}

void TValue::operator = (const TValue& value) {
    Data = value.Data;
    Values = value.Values;
    *Object = *(value.Object);
}

TValue::~TValue() {
    delete Object;
}

void TValue::Add(const TObject& object) {
    TValue v;
    v = object;
    Values.push_back(v);
}

void TValue::operator = (const TObject& v) {
    (*Object) = v;
}

TValue& TValue::operator [](const char* key) {
    return (*Object)[key];
}

TValue& TValue::operator [](const std::string& key) {
    return (*Object)[key];
}

bool operator == (const TValue& val, const TObject& object) {
    return true;
}

