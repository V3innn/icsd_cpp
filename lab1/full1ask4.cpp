#include <iostream>
#include <string>
using namespace std;

class Rectangle {
public:
    float side_a;   
    float side_b;
    string Color;
    float area() {
        return side_a*side_b;
    }

    void display() {
        cout <<"Rectangle : " << side_a <<"," << side_b << endl;
        cout <<"Color: "   << Color << endl;
        cout <<"Area: "  << area() << endl;
        }

};
class Circle {
public:
    float radius;
    string Color;
    float area() {
        float pi=3.14;
        return pi*radius*radius;
    }
    void display() {
        cout <<"Circle : " << radius << endl;
        cout <<"Color: "   << Color << endl;
        cout <<"Area: "  << area() << endl;
        }
};

int main(){
    Rectangle rect1;
    rect1.side_a = 2.1;
    rect1.side_b = 3.2;
    rect1.Color = "red";
    rect1.display();

    Circle circ1;
    circ1.radius = 2.0;
    circ1.Color = "yellow";
    circ1.display();

    return 0;
};

