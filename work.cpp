// auhtor : gavin  michori
//reg no : bscit-01-0025/2025
//date : 22/05/2025
//description: program to compute grades/average for zetech


#include <iostream>

using namespace std;

int main() {
    int mark1, mark2, mark3;
    float average;
    
    cout << "Enter your marks for the 3 subjects" << endl;
    
    cout << "Enter mark 1: ";
    cin >> mark1;
    
    cout << "Enter mark 2: ";
    cin >> mark2;
    
    cout << "Enter mark 3: ";
    cin >> mark3;
    
    // Calculate the average
    average = (mark1 + mark2 + mark3) / 3.0;
    
    cout << "The average of your 3 marks is: " << average << endl;
    

    // calculate the grades 
    if (average >= 70 && average <= 100) {  
        cout << "Your grade is A" << endl;
    } else if (average >= 60 && average < 69) {
        cout << "Your grade is B" << endl;
    } else if (average >= 50 && average < 59) {
        cout << "Your grade is C" << endl;
    } else if (average >= 40 && average < 49) {
        cout << "Your grade is D" << endl;
    } else {
        cout << "Your grade is E(Fail)" << endl;
    }
    return 0;
}