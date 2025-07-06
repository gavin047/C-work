// name : Gavin Michori
// adm no: BSCIT-01-0025/2025
//Date :21/06/2025
// car model 

#include <iostream>
#include <string>
 
using namespace std;

class car {    // class ..
public:   // access identifier
    string brand;
    string model;
    float price;
    int mileage;

     car(string x, string y, float z, int w) {
        brand = x;
        model = y;
        price = z;
        mileage = w;
    }

    void display() const {
        cout << "Car Details:" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: " << price << endl;
        cout << "Mileage: " << mileage << " km" << endl;
    }

    void drive(int km) {
        mileage += km;
        cout << "Mileage updated! Current mileage: " << mileage << " km." << endl;
    }
};
 
int main() {
    car myCar("Toyota", "Corolla", 20000, 5000);
    myCar.display();
    myCar.drive(150);
    myCar.display();
    return 0;
}


