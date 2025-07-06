//name : Gavin michori
// adm number: bscit-01-0025/2025
// description: bank management system
// date : 26/06/2025

# include <iostream>
#include <string>

using namespace std;

class BankAccount{
    private:
    string accountHolder;
    double balance;

    public:
    // setter function
    void setaccountHolder(string h){
        accountHolder = h;
    };
     void setbalance(double b){
        balance = b;
     };

     //getter function 
     string getaccountHolder(){
        return accountHolder;
     };

     double getbalance(){
        return balance;
     };

};

int main(){

    BankAccount ba;
    ba.setaccountHolder("Shanks");
    ba.setbalance(200000);
    cout<<"Owner :"<<ba.getaccountHolder()<<endl;
    cout<<"balance :"<<ba.getbalance()<<endl;
    return 0;
};