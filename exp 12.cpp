#include <iostream>
using namespace std;

int max(int *a, int *b, int *c) {
    int max = *a; 

    if (*b > max) {
        max = *b;
    }

    if (*c > max) {
        max = *c;
    }

    return max;
}

int main() {
    int num1, num2, num3;
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;

    int result = max(&num1, &num2, &num3);

    cout << "The max2  of the three numbers is: " << result << endl;

    return 0;
}
