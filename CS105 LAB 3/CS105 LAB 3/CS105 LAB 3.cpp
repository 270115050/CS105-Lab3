// CS105 LAB 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;
#include "Shapes.h"
#include "ChildrenShapes.h"

int main()
{
    Square square;
    Rectangle rectangle;
    Triangle triangle;
    Circular circular;
    int choice, choice2;
    bool isTrue, isTrue2;

    do {
        system("cls");
        isTrue = true;
        cout << "\n|----------------------------------------|"
            << "\n|            Shapes Calculator           |"
            << "\n|----------------------------------------|"
            << "\n| Press 1 to calculate Square            |"
            << "\n| Press 2 to calculate Rectangle         |"
            << "\n| Press 3 to calculate Triangle          |"
            << "\n| Press 4 to calculate Circle            |"
            << "\n| Press 5 to exit                        |"
            << "\n|----------------------------------------|"
            << "\n| Choose option: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "\n\n\n|--------------------------------|"
                << "\n|       Square Calculator        |"
                << "\n|--------------------------------|\n\n\n";
            square.draw();

            cout << "\n|----------------------------------------------------------------|"
                << "\n| Press 1 to calculate Area (Area = base * base sq.units         |"
                << "\n| Press 2 to calculate Perimeter (Perimeter = 4 * base sq.units  |"
                << "\n| Press 3 to to go back                                          |"
                << "\n|----------------------------------------------------------------|"
                << "\n| Choose option: ";
            cin >> choice2;

            if (choice2 == 1) {
                square.getData();
                square.calculateArea();
                square.giveResult();
            }
            else if (choice2 == 2) {
                square.getData();
                square.calculatePerimeter();
                square.giveResult();
            }
            else if (choice2 == 3) {
                cout << "Going back to main menu..\n";
            }             
            else {
                cout << "\nInvalid Input, Please Try Again..\n";
            }
            break;
        case 2:
            cout << "\n\n\n|-----------------------------------|"
                << "\n|        Rectangle Calculator       |"
                << "\n|-----------------------------------|\n\n\n";
            rectangle.draw();

            cout << "\n|-------------------------------------------------------------------------|"
                 << "\n| Press 1 to calculate Area (Area = Length * Width sq.units               |"
                 << "\n| Press 2 to calculate Perimeter (Perimeter = 2 * Length + Width sq.units |"
                 << "\n| Press 3 to to go back                                                   |"
                 << "\n|-------------------------------------------------------------------------|"
                 << "\n| Choose option: ";
            cin >> choice2;

            if (choice2 == 1) {
                rectangle.getData();
                rectangle.calculateArea();
                rectangle.giveResult();
            }
            else if (choice2 == 2) {
                rectangle.getData();
                rectangle.calculatePerimeter();
                rectangle.giveResult();
            }
            else if (choice2 == 3) {
                cout << "Going back to main menu..\n";
            }
            else {
                cout << "\nInvalid Input, Please Try Again..\n";
            }
            break;
        case 3:
            cout << "\n\n\n|----------------------------------|"
                << "\n|        Triangle Calculator       |"
                << "\n|----------------------------------|\n\n\n";
            triangle.draw();

            cout << "\n|--------------------------------------------------------------------|"
                << "\n| Press 1 to calculate Area (Area = base * height / 2 sq.units        |"
                << "\n| Press 2 to calculate Perimeter (Perimeter = a + b + c sq.units      |"
                << "\n| Press 3 to to go back                                               |"
                << "\n|---------------------------------------------------------------------|"
                << "\n| Choose option: ";
            cin >> choice2;

            if (choice2 == 1) {
                triangle.getData();
                triangle.calResult();
                triangle.giveResult();
            }
            else if (choice2 == 2) {
                int a, b, c;
                cout << "Please enter the side(A) in centimeters: ";
                cin >> a;
                cout << "Please enter the side(B) in centimeters: ";
                cin >> b;
                cout << "Please enter the side(C) in centimeters: ";
                cin >> c;
                triangle.calResult(a,b,c);
                triangle.giveResult();
            }
            else if (choice2 == 3) {
                cout << "Going back to main menu..\n";
            }
            else {
                cout << "\nInvalid Input, Please Try Again..\n";
            }
            break;
        case 4:
            cout << "\n\n\n|----------------------------------|"
                << "\n|        Circular Calculator       |"
                << "\n|----------------------------------|\n\n\n";
            circular.draw();

            cout << "\n|-------------------------------------------------------------------|"
                << "\n| Press 1 to calculate Area (Area = 3.14*Radius^2 sq.units           |"
                << "\n| Press 2 to calculate Perimeter (Perimeter = 2*3.14*Radius sq.units |"
                << "\n| Press 3 to to go back                                              |"
                << "\n|--------------------------------------------------------------------|"
                << "\n| Choose option: ";
            cin >> choice2;

            if (choice2 == 1) {
                circular.getData();
                circular.calculateArea();
                circular.giveResult();
            }
            else if (choice2 == 2) {
                circular.getData();
                circular.calculatePerimeter();
                circular.giveResult();
            }
            else if (choice2 == 3) {
                cout << "Going back to main menu..\n";
            }
            else {
                cout << "\nInvalid Input, Please Try Again..\n";
            }
            break;
        case 5:
            isTrue = false;
            cout << "\nExiting Program.....\n";
            break;
        default:
            cout << "\nInvalid Input, Please Try Again..\n";
            break;
        }
        system("pause");
    } while (isTrue);    
}