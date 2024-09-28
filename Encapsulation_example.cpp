#include <iostream>
using namespace std;

class Rectangle{
private:
    double length;
    double width;

    void UpdateArea(){
        area = length * width;
    }
    void UpdatePerimeter(){
        perimeter = 2 * (length + width);
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
Rectangle obj(4.3,3.2);
cout << "Initial Result" << endl;
cout <<"length : " << obj.getLength() << endl;
cout <<"length : " << obj.getWidth() << endl;
cout <<"Area : " << obj.area << endl;
cout <<"Perimeter : " << obj.perimeter << endl;
obj.setLength(5.1);
obj.setWidth(2.0);
cout << "Update Result" << endl;
cout <<"length : " << obj.getLength() << endl;
cout <<"length : " << obj.getWidth() << endl;
cout <<"Area : " << obj.area << endl;
cout <<"Perimeter : " << obj.perimeter << endl;
return 0;
}
