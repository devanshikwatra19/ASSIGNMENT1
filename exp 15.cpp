#include <iostream>
using namespace std;

class DynamicArray {
private:
    int* data;
    int size; 
    int capacity;

public:
    
    DynamicArray(int initialSize) : size(initialSize), capacity(initialSize) {
        data = new int[capacity];
    }

    ~DynamicArray() {
        delete[] data;
    }


    void addElement(int value) {

        if (size >= capacity) {
            int newCapacity = capacity * 2;
            int* newData = new int[newCapacity];

            for (int i = 0; i < size; ++i) {
                newData[i] = data[i];
            }

            delete[] data;
            data = newData;
            capacity = newCapacity;
        }

        data[size] = value;
        ++size;
    }

    void printArray() const {
        for (int i = 0; i < size; ++i) {
            cout << data[i] << " ";
        }
        cout <<endl;
    }
};

int main() {
    DynamicArray arr(5);

    arr.addElement(10);
    arr.addElement(20);
    arr.addElement(30);
    arr.addElement(40);
    arr.addElement(50);
    arr.addElement(60); 

    arr.printArray();

    return 0;
}
