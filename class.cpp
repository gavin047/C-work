
// auhtor : gavin  michori
//reg no : bscit-01-0025/2025
//date: 12/06/2025
// class creation
# include <iostream>
using namespace std;    
// class creation 
class cylinder{
// properties
    public: //access specifier
      float radius, height;
      float calcVolume(){
        return 3.142*radius*radius*height;
      }
      float calcSurfaceAarea(){
        return (2*3.142*radius*radius) + (2*3.142*radius*height);
      }
}; 
// main function 
int main(){
  cylinder c1; //the object
  float vol, surf;
  // propmt the user to enter the radius and height
  cout<<"Enter the radius of the cylinder: ";
  cin>>c1.radius;
  cout<<"Enter the height of the cylinder: ";
  cin>>c1.height;
  // calculate the volume and surface area
  vol = c1.calcVolume();
  surf = c1.calcSurfaceAarea();
// display the volume and surface area
  cout<<"The volume of the cylinder is: "<<vol<<endl;
  cout<<"The surface area of the cylinder is: "<<surf<<endl;

  return 0;
}