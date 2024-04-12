#include <iostream>
#include <string>
using namespace std;


class Object {
public:
    Object(string name, double price) : name(name), price(price) {}

    string getName() { return name; }
    double getPrice() { return price; }

private:
    string name;
    double price;
};

class Food : 
public Object {
public:
    Food(string name, double price,string category) : Object(name, price), category(category) {}

    string getCategory() { return category; }

private:
    string category;
};

class Drink : public Object {
public:
    Drink(string name, double price,) : Object(name, price), {}
};

int main() {
    Food pasta("Pasta", 10.0, "Main Course");
    Drink coke("Coke", 2.0,);

    cout << "Item: " << pasta.getName() << ", Category: " << pasta.getCategory() << ", Price: " << pasta.getPrice() <<endl;
    cout << "Item: " << coke.getName() << ", Alcoholic: " << (coke.isAlcoholic() ? "Yes" : "No") << ", Price: " << coke.getPrice() <<endl;

    return 0;
}