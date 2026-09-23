// Answer to Question 1

#include <iostream>
using namespace std;

class Rectangle {
private:
    float len;
    float brd;

public:
    void setDimensions(float l, float b) {
        len = l;
        brd = b;
    }

    float calculateArea();
    float calculatePerimeter();
    void display();
};

float Rectangle::calculateArea() {
    return len * brd;
}

float Rectangle::calculatePerimeter() {
    return 2 * (len + brd);
}

void Rectangle::display() {
    cout << "Length: " << len << endl;
    cout << "Breadth: " << brd << endl;
    cout << "Area: " << calculateArea() << endl;
    cout << "Perimeter: " << calculatePerimeter() << endl;
}

int main() {
    Rectangle rect;
    float l, b;

    cout << "Enter length and breadth: ";
    cin >> l >> b;

    rect.setDimensions(l, b);
    rect.display();

    return 0;
}