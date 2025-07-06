# include<iostream>
# include <string>
using namespace std;


class Employee{
    private: // acces modifier 
     
    string Name;
    int Salary;
   
    public:
     //setter functiom
     void setSalary(int s){
        Salary = s;
     }
     void setName(string n){
        Name = n;
     }
     // getter function
     int getSalary(){
        return Salary;
     }
     string getName(){
        return Name;
     }
};

int main(){
    Employee emp;
    emp.setName("Gold.D.Rodger");
    emp.setSalary(4000000);
    cout<<"Name :"<<emp.getName()<<endl;
    cout<<"Salary :"<<emp.getSalary()<<endl;

    return 0;

};




