// auhtor : gavin  michori
//reg no : bscit-01-0025/2025
//date :08/06/2025
//description: program to compute simple interest

#include <iostream>
#include <cmath>

using namespace std;

float product(float principal, float time, float rate);

int main() {
    float principal, rate, time; 

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