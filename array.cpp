#include "array.h"

Array::Array(int size) {
    this->size = size;
    data = new int[size];
}

Array::~Array() {
    delete[] data;
}

void Array::setValueAt(int index, int value) {
    if (index >= 0 && index < size) {
        data[index] = value;
    }
}

int Array::getValueAt(int index) {
    if (index >= 0 && index < size) {
        return data[index];
    }
    return 0; // return 0 if index is out of bounds
}