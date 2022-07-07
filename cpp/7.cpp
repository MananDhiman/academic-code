#include <iostream>
using namespace std;

float area(float, float);
float area(float);
double area(double, double);


int main(){

    float base, perpendicular;

    cout << "Enter Base, and Perpendicular for Right Angled Triangle:\n";
    cin >> base >> perpendicular;

    cout << "The Area of Right Angled Triangle is: "<< area(base, perpendicular) << endl;

    float side;

    cout << "Enter Side for Equilateral Triangle:\n";
    cin >> side;
    cout << "The Area of Equilateral Triangle is: "<< area(side) << endl;

    double side_1, side_2;

    cout << "Enter Sides of Isosceles Triangle:\n";
    cin >> side_1 >> side_2;

    cout << "The Area of Isosceles Triangle is: " << area(side_1, side_2) << endl;

    return 0;
}

float area(float base, float perpendicular){
    return 0.5*base*perpendicular;
}

float area(float side){
    return (1.732/4)*side*side;
}

double area(double side_1, double side_2){
    return 0.5*side_1*side_2;
}
