#include <iostream>
using namespace std;
void menu();
void area_perimeter();
float area_circle(int radius);
float perimeter_circle(int radius);
int area_rectangle(int length, int breadth);
int perimeter_rectangle(int length, int breadth);
int area_square(int side);
int perimeter_square(int side);
float area_triangle(int height, int base);
int perimeter_triangle(int a, int b, int c);
int main()
{
    
    while(true)
    {
    menu();
    int ch;
    cout << "Enter Your Choice:(0 for exit) ";
    cin >> ch;
    switch (ch)
    {
    case 1:
        cout << "\nYou Select Circle:\n ";
        area_perimeter();
        cout << "Enter the choice: ";
        cin >> ch;
        int radius;
        cout << "Enter the radius: ";
        cin >> radius;
        if (ch == 1)
            area_circle(radius);
        else if (ch == 2)
            perimeter_circle(radius);
        break;

    case 2:
        cout << "\nYou Select Rectangle: \n";
        area_perimeter();
        cout << "Enter the choice: ";
        cin >> ch;
        int length;
        cout << "Enter the length: ";
        cin >> length;
        int breadth;
        cout << "Enter the breadth: ";
        cin >> breadth;
        if (ch == 1)
            area_rectangle(length, breadth);
        else if (ch == 2)
            perimeter_rectangle(length, breadth);
        break;

    case 3:
        cout << "\nYou Select Square:\n ";
        area_perimeter();
        cout << "Enter the choice: ";
        cin >> ch;
        int side;
        cout << "Enter the Side: ";
        cin >> side;

        if (ch == 1)
        {
            area_square(side);
        }
        else if (ch == 2)
        {
            perimeter_square(side);
        }
        break;
    case 4:
        cout << "\nYou Select Triangle:\n ";
        area_perimeter();
        cout << "Enter the choice: ";
        cin >> ch;

        if (ch == 1)
        {
        
            int height, base;
            cout << "enter the height";
            cin >> height;
            cout << "Enter the base: ";
            cin >> base;
            area_triangle(height, base);
        }
        else if (ch == 2)
        {
            int a, b, c;
            cout << "Enter the value of a: ";
            cin >> a;
            cout << "Enter the value of b: ";
            cin >> b;
            cout << "Enter the value of c: ";
            cin >> c;
            perimeter_triangle(a, b, c);
        }
        break;
    }
    if(ch==0)
    {
        break;
    }
    }
}

void area_perimeter()
    
{
    cout <<"1.Area\n";
    cout <<"2.Perimeter\n ";
}

float area_circle(int radius)
{
    float area = 3.14 * radius * radius;
    cout << "Area of Circle: ";
    cout << area;
    return area;
}

float perimeter_circle(int radius)
{
    float perimeter = 2 * 3.14 * radius;
    cout<<"Perimeter of Rectangle: ";
    cout << perimeter;
    return perimeter;
}

int area_rectangle(int length, int breadth)
{
    int area = length * breadth;
    cout<<"Area of Rectangle: ";
    cout << area;
    return area;
}

int perimeter_rectangle(int length, int breadth)
{
    int perimeter = 2 * (length + breadth);
    cout<<"Perimeter of Rectangle: ";
    cout << perimeter;
    return perimeter;
}

int area_square(int side)
{
    int area = side * side;
    cout<<"Area of Square: ";
    cout << area;
    return area;
}

int perimeter_square(int side)
{
    int perimeter = 4* side;
    cout<<"Perimeter of Square: ";
    cout << perimeter;
    return perimeter;
}

float area_triangle(int height, int base)
{
    float area = (height * base) / 2;
    cout<<"Area of Triangle: ";
    cout<<area;
    return area;
}

int perimeter_triangle(int a, int b, int c)
{
    int perimeter = a + b + c;
    cout<<"Perimeter of Triangle: ";
    cout<<perimeter;
    return perimeter;
}

void menu()
{
    cout<< "\n........Menu........ " << endl;
    cout << "1.Circle" << endl;
    cout << "2.Rectangle" << endl;
    cout << "3.Square" << endl;
    cout << "4.Triangle" << endl;
}