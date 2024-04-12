#include <iostream>
using namespace std;

class ArrayComparer {
private:
    int array1[10];
    int array2[10];

public:
    ArrayComparer() {
        for (int i = 0; i < 10; i++) {
            array1[i] = i + 1;
            array2[i] = i + 11;
        }
    }

    void setArray1(int arr[]) {
        for (int i = 0; i < 10; i++) {
            array1[i] = arr[i];
        }
    }

    void setArray2(int arr[]) {
        for (int i = 0; i < 10; i++) {
            array2[i] = arr[i];
        }
    }

    int sumArray(int arr[]) {
        int sum = 0;
        for (int i = 0; i < 10; i++) {
            sum += arr[i];
        }
        return sum;
    }

    void compareArrays() {
        int sum1 = sumArray(array1);
        int sum2 = sumArray(array2);

        if (sum1 > sum2) {
         cout << "Array 1 has a higher sum of elements: " << sum1 <<endl;
        } else if (sum2 > sum1) {
            cout << "Array 2 has a higher sum of elements: " << sum2 <<endl;
        } else {
        cout << "Both arrays have the same sum of elements: " << sum1 <<endl;
        }
    }
};

int main() {
    ArrayComparer comparer;
    
    comparer.compareArrays();

    return 0;
}
