#include<iostream>

using namespace std;

class Rectangle{
private:
    double length;
    double width;


    void UpdateArea(){
        area = width * length;
    }
    void UpdatePerimeter(){
        perimeter = 2 * (width + length);
    }

public:
    double area;
    double perimeter;

    Rectangle(double len, double wid){
    length = len;
    width = wid;
    UpdateArea();
    UpdatePerimeter();
    }
    double getLength(){
    return length;
    }
    double getWidth(){
    return width;
    }

    void setLength(double len){
    length = len;
    UpdateArea();
    UpdatePerimeter();
    }

    void setWidth(double wid){
    width = wid;
    UpdateArea();
    UpdatePerimeter();
    }

};

int main(){
Rectangle Rec(8.0,9.0);
cout << "Initial Rectangle..........." << endl;
cout<< "Length:  " << Rec.getLength() <<endl;
cout << "Width:  " << Rec.getWidth() << endl;
cout << "Area:   "<< Rec.area << endl;
cout << "Perimeter: " << Rec.perimeter << endl;

Rec.setLength(3.4);
Rec.setWidth(4.0);
cout << "Modified Rectangle ........" << endl;
cout << "Length:  " << Rec.getLength() << endl;
cout << "Width:   " << Rec.getWidth() << endl;
cout << "Area: " << Rec.area << endl;
cout << "Perimeter:   " << Rec.perimeter << endl;

return 0;
}
