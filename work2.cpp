// auhtor : gavin  michori
//reg no : bscit-01-0025/2025
//date : 22/05/2025
//description: program to get the body mass of an individual


#include <iostream>

using namespace std;

int main() {
    float height, weight;
    
    cout << "Enter your height in meters: ";
    cin >> height;
    
    cout << "Enter your weight in kilograms: ";
    cin >> weight;
    
    float bmi = weight / (height * height);
    
    cout << "Your Body Mass Index (BMI) is: " << bmi << endl;

  // Determine the body mass category based on BMI
    if (bmi < 18.5) {
        cout << "You are underweight." << endl;
    } else if (bmi >= 18.5 && bmi < 24.9) {
        cout << "You have a normal weight." << endl;
    } else if (bmi >= 25 && bmi < 29.9) {
        cout << "You are overweight." << endl;
    } else {
        cout << "You are obese." << endl;
    }
    
    return 0;
}