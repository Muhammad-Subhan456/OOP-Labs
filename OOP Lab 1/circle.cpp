#include <iostream>
using namespace std;
class Circle{
    public:
    float radius;
    void setRadius(int x){
        radius = x;
    }
    float getRadius(){
        return radius;
    }
    float Circumference(){
        return 2*3.14159*radius;
    }
    float area_of_circle(){
        return 3.14159*radius*radius;
    }
   
};

int main(){
    int r;
   Circle cirum;
   cout << "Enter Radius: ";
   cin >> r;
   cirum.setRadius(r);
   cout << "Radius Of Circle: " << cirum.getRadius() << endl;
   cout << "Circumference of Circle: " << cirum.Circumference() << endl;
   cout << "Area of Circle: " << cirum.area_of_circle() << endl;
   
}