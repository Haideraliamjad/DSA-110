#ifndef ARRAY_H
#define ARRAY_H

class Array {
public:
    Array(int size); // constructor
    ~Array(); // destructor
    void setValueAt(int index, int value);
    int getValueAt(int index);

private:
    int* data;
    int size;
};

#endif // ARRAY_H