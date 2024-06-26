#include <iostream>
using namespace std;
class Series {
public:
  int calculateSum(int n) {
    if (n <= 0) {
      return -1; 
    }

    int sum = 0;
    for (int i = 1; i <= n; ++i) {
      sum += i * (i + 1) / 2;
    }
    return sum;
  }
};

int main() {
  int n;
  cout << "Enter a positive integer: ";
 cin >> n;

  if (n <= 0) {
   cout << "Invalid input. Please enter a positive integer." << endl;
    return 1;
  }

  Series seriesSum;
  int result = seriesSum.calculateSum(n);
  cout << "Sum of the series for n = " << n << " is: " << result << endl;

return 0;
}