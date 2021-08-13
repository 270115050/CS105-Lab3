#pragma once
class Square :public Shapes {
public:
    void draw() {
        for (int i = 0; i < 5; i++) {
            for (int x = 0; x < 5; x++)
                cout << "* ";
            cout << endl;
        }
    }

    void getData() {
        cout << "Please enter the base in centimeters: ";
        cin >> base;
    }

    void calculateArea() {
        result = base * base;
    }

    void calculatePerimeter() {
        result = 4 * base;
    }

    Square operator+(const Square s) {
        Square square;
        square.result = this->base + s.base;

        return square;
    }
};

class Rectangle : public Shapes {
public:
    void draw() {
        for (int i = 0; i < 5; i++) {
            for (int x = 0; x < 10; x++)
                cout << "* ";
            cout << endl;
        }
    }

    void calculateArea() {
        result = base * height;
    }

    void calculatePerimeter() {
        result = 2 * (base + height);
    }

    void getData() {
        cout << "Please enter the Length in centimeters: ";
        cin >> base;
        cout << "Please enter the Width in centimeters: ";
        cin >> height;
    }
};

class Triangle : public Shapes {
private:
    double a, b;

public:
    void draw() {
        for (int i = 0; i < 10; i++) {
            cout << "\t";
            for (int j = 0; j < 10 - i; j++)
                cout << " ";
            for (int x = 0; x < i; x++)
                cout << "* ";
            cout << endl;
        }
    }

    void calResult() {
        result = base * height / 2;
    }

    void calResult(double a, double b, double c) {
        result =  a + b + c;
    }

    void getData() {
        cout << "Please enter the base in centimeters: ";
        cin >> base;
        cout << "Please enter the height in centimeters: ";
        cin >> height;
    }
};

class Circular :public Shapes {
private:
    double radius;
    double const p = 3.14;
public:
    void draw() {
        float r = 8;
        float pr = 2;
        for (int i = -r; i <= r; i++)
        {
            for (int j = -r; j <= r; j++)
            {
                float d = ((i * pr) / r) * ((i * pr) / r) + (j / r) * (j / r);
                if (d > 0.95 && d < 1.08)
                    cout << "*";
                else
                    cout << " ";
            }
            cout << endl << "  ";
        }
    }

    void calculateArea() {
        result = p * pow(radius, 2);
    }

    void calculatePerimeter() {
        result = 2 * p * radius;
    }

    void getData() {
        cout << "Please enter the radius of the circle: ";
        cin >> radius;
    }
};
