#include <iostream>
using namespace std;
class ComplexNumber {
private:
  double real, imag;
public:
  ComplexNumber(double r = 0.0, double i = 0.0) : real(r), imag(i) {}
  friend ComplexNumber operator+(const ComplexNumber& a, const ComplexNumber& b);
  void display() {
    cout << real << " + " << imag << "j" << endl;
  }
};
ComplexNumber operator+(const ComplexNumber& a, const ComplexNumber& b) {
  return ComplexNumber(a.real + b.real, a.imag + b.imag);
}

int main() {
  ComplexNumber c1(2, 3), c2(4, 1);
  ComplexNumber c3 = c1 + c2;

  cout << "Result: ";
  c3.display();

  return 0;
}