// auhtor : gavin  michori
//reg no : bscit-01-0025/2025
//date :08/06/2025
//description: program to calculate the gross pay,




#include <iostream>
#include <iomanip>

using namespace std;

float calculate_gross_pay(float hours, float wage);
float calculate_taxes(float gross_pay);
float calculate_net_pay(float gross_pay, float taxes);

int main() {
    float hours, wage, gross_pay, taxes, net_pay;

    // Input hours worked
    cout << "Enter the number of hours worked in a week: ";
    cin >> hours;

    // Input hourly wage
    cout << "Enter the hourly wage: ";
    cin >> wage;

    // Input validation
    if (hours < 0 || wage < 0) {
        cout << "Error: Hours and wage must be non-negative." << endl;
        return 1;
    }

    // Calculate gross pay
    gross_pay = calculate_gross_pay(hours, wage);

    // Calculate taxes
    taxes = calculate_taxes(gross_pay);

    // Calculate net pay
    net_pay = calculate_net_pay(gross_pay, taxes);

    // Output results with 2 decimal places
    cout << fixed << setprecision(2);
    cout << "Gross Pay: $" << gross_pay << endl;
    cout << "Taxes: $" << taxes << endl;
    cout << "Net Pay: $" << net_pay << endl;

    return 0;
}

float calculate_gross_pay(float hours, float wage) {
    if (hours <= 40) {
        return hours * wage;
    } else {
        // Regular pay for first 40 hours + overtime (1.5 * wage) for excess hours
        return (40 * wage) + ((hours - 40) * wage * 1.5);
    }
}

float calculate_taxes(float gross_pay) {
    if (gross_pay <= 600) {
        // 15% tax on entire amount
        return gross_pay * 0.15;
    } else {
        // 15% on first $600 + 20% on the rest
        return (600 * 0.15) + ((gross_pay - 600) * 0.20);
    }
}

float calculate_net_pay(float gross_pay, float taxes) {
    return gross_pay - taxes;
}