// auhtor : gavin  michori
//reg no : bscit-01-0025/2025
//date: 12/06/2025
// class creation

#include <iostream>
#include <string>
using namespace std;

class employee {
public:  // Access specifier
    int id_no;
    std::string name, occupation;

    void display() {
        // Display the stored values
        std::cout << "\nEmployee Details:" << std::endl;
        std::cout << "ID: " << id_no << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Occupation: " << occupation << std::endl;
    }
};

int main(){
    employee emp; //employee object
    
    // Prompt for input in main
    std::cout << "Enter ID number: ";
    std::cin >> emp.id_no;

    // Clear the newline character from the input buffer
    std::cin.ignore();

    // Prompt for name
    std::cout << "Enter name: ";
    std::getline(std::cin, emp.name); // Allows spaces in the name

    // Prompt for occupation
    std::cout << "Enter occupation: ";
    std::getline(std::cin, emp.occupation); // Allows spaces in the occupation

    // Call display to show the entered values
    emp.display();

    return 0;
}


