// auhtor : gavin  michori
//reg no : bscit-01-0025/2025
//date : 22/05/2025
//description: program to compute bonus 

# include <iostream>

using namespace std;

int main(){
    float salary,years_of_service, bonus,total_salary;
    cout<<"Enter your  salary"<<endl;
    cin>>salary;
    cout<<"Enter years_of_service"<<endl;
    cin>>years_of_service;

    if (years_of_service > 10){
        bonus = 0.1 * salary;
        total_salary = bonus + salary;
    }
    else if (years_of_service>=6 && years_of_service<=10){
        bonus = 0.08 * salary;
        total_salary = bonus + salary;
    }
    else if (years_of_service<6){
        bonus = 0.06 * salary;
        total_salary = bonus + salary;
    }

    

    cout<<"the Net bonus is :"<<bonus<<endl;
    cout<<"the Total salary is :"<<total_salary<<endl;

    return 0;
}