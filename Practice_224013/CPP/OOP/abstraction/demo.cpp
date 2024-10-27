#include <iostream>
using namespace std;

class Shape { // abstract class, class truu tuong
public:
    virtual void draw() const = 0; // Phuong thuc ao, virtual method (no content)
    virtual void calculateArea() const = 0;
};

class Circle:public Shape {
    // Implement
    void draw() const override {
        cout << "Draw a circle" << endl;
    }
    void calculateArea() const override {
        cout << "calculateArea a circle" << endl;
    }
};

class Rectangle:public Shape {
    void draw() const override {
        cout << "Draw a rectangle" << endl;
    }
    void calculateArea() const override {
        cout << "calculateArea a Rectangle:" << endl;
    }
};

int main() {
    Shape* c1 = new Circle();
    c1 -> draw();
    c1 -> calculateArea();

    Shape* r1 = new Rectangle();
    r1 -> draw();
    r1 -> calculateArea();

}