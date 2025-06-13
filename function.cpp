// auhtor : gavin  michori
//reg no : bscit-01-0025/2025
//date : 22/05/2025
#include <iostream>
#include <cmath>
using namespace std;

int product ( int x, int y);
float division (float a, float b);

int addition (int x, int y){
    return x + y ;
}
int main(){
    int sum, multiply, add;
    add = addition(20, 25);
    sum = division(10, 20);
    multiply = product(20, 30);
    
    cout<<"calling addition:"<<add<<endl;
    cout<<"calling division:"<<sum<<endl;
    cout<<"calling product:"<<multiply<<endl;
    
    return 0;
}
//function definition
int product ( int x, int y){
    return x * y ;
}

float division ( float a, float b){
    return b/a;
}


