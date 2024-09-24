#include <iostream>
using namespace std;
class Rectangle{    
    public:
    int length;
    int width;
        void setLength(int x){
            length = x;
        }
        void setWidth(int x){
            width = x;
        }
        int getLength(){
            return length;
        }
        int getWidth(){
            return width;
        }
        int perimeter(){
            return 2*(length+width);
        }
        int Area(){
            return length*width;
        }
};
int main(){
    int l,w;
   Rectangle check;
   cout << "Enter Length: ";
   cin >> l;
   check.setLength(l);
   cout << "Enter Width: ";
   cin >> w;
   check.setWidth(w);
   cout << "Length of Rectangle: "<< check.getLength() << endl;
   cout << "Width of Rectangle: "<<  check.getWidth() << endl;
   cout <<"Area Of Rectangle: " << check.Area() << endl;
   cout << "Perimeter of Rectangle: " << check.perimeter() <<endl;
}