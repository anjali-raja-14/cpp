#include <iostream>
#include <math.h>
using namespace std;

int area(int);               // square
double area(double, double); // rectangle
double area(double);         // circle

int main()
{
    int side_square,area_of_square;
    cout << "Enter the side of square: ";
    cin >> side_square;
    area_of_square=area(side_square); // square
    cout<<area_of_square<<endl;

    double length,breadth,area_of_reactangle;
    cout<<"Enter the length: ";
    cin>>length;
    cout<<"Enter the braedth: ";
    cin>>breadth;
    area_of_reactangle=area(length,breadth);
    cout<<area_of_reactangle<<endl;

    double radius,area_of_circle;
    cout<<"Enter the radius: ";
    cin>>radius;
    area_of_circle=area(radius);
    cout<<area_of_circle<<endl;
    
}
int area(int x)
{
    cout << "The area of square: ";
    return x * x;
}
double area(double x)
{
    cout << "The area of Circle: ";
    return M_PI * x * x;
}

double area(double x, double y)
{
    cout << "The area of reactangle: ";
    return x * y;
}
