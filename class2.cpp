
// auhtor : gavin  michori
//reg no : bscit-01-0025/2025
//date: 12/06/2025
// class creation

#include <iostream>
using namespace std;

class addition{
    public:  //access specifier
    int i1, i2, i3;  //data members
    int claculateProduct(){ //methods
        return i1*i2*i3;
    }

};
// main function
int main(){
    addition add; // the object
    int multi;
    add.i1=22;
    add.i2=30;
    add.i3=50;

    multi=add.claculateProduct();
    cout<< "The product is :"<<multi<<endl;


    return 0;
}