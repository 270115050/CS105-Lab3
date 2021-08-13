#pragma once
class Shapes {
protected:
    double base;
    double height;
    double result;

public:
    void draw() {
        cout << "draw shapes";
    }

    void getData() {
        cout << "Please enter the base in centimeters: ";
        cin >> base;
    }

    void calculateArea() {
        result = base + base;
    }

    void giveResult() {
        cout << "\n\nThe result is: " << result << " square centimers (sq.cm)\n";
    }
};