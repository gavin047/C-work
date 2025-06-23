// name : Gavin Michori
// adm no: BSCIT-01-0025/2025
//Date :19/06/2025
// description : use of conductors.


#include <iostream>
# include <string>
using namespace std;

class Car{ // the class
    public:  // access specifier
    string brand;
    string model;
    int year;

    Car(string x, string y, int z){
        brand = x;
        model = y;
        year = z;
       
    }
    ~Car(){
        cout<<"destructor invoked"<<endl;
    }
   
     
};

int main (){
    
     Car carObj1("BMW", "M4", 1999);//create an object (this will call the constructor)
     Car carObj2("ford", "Mustang", 1698);
     Car carObj3("dodge", "Hellcat", 1996);
     
     //print the values
     cout<<carObj1.brand<<" "<<carObj1.model<<" "<<carObj1.year<<" "<<endl;
     cout<<carObj2.brand<<" "<<carObj2.model<<" "<<carObj2.year<<" "<<endl;
     cout<<carObj3.brand<<" "<<carObj3.model<<" "<<carObj3.year<<" "<<endl;
     
    return 0 ;
}