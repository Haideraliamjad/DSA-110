#include "array.h"

int main() {
    Array myArray(5); // create an array of size 5
    myArray.setValueAt(0, 10);
    myArray.setValueAt(1, 20);
    myArray.setValueAt(2, 30);

    std::cout << "Value at index 0: " << myArray.getValueAt(0) << std::endl;
    std::cout << "Value at index 1: " << myArray.getValueAt(1) << std::endl;
    std::cout << "Value at index 2: " << myArray.getValueAt(2) << std::endl;

    return 0;
}