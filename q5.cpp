#include <iostream>
#include <cmath>

using namespace std;

float product(float principal, float time, float rate);

int main() {
    float principal, rate, time; // Changed to float to match function signature

    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the rate: ";
    cin >> rate;

    cout << "Enter the time: ";
    cin >> time;

    cout << "The simple interest is: " << product(principal, time, rate) << endl;

    return 0;
}

float product(float principal, float time, float rate) {
    return (principal * time * rate) / 100;
}