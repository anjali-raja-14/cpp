#include <iostream>
#include<conio.h>
using namespace std;
float celcius_fehrenheit(float degree, float ce_feh);
float celcius_kelvin(float degree, float ce_kelvin);
float fehrenheit_celcius(float degree, float feh_ce);
float fehrenheit_kelvin(float degree, float feh_kelvin);
float kelvin_celcius(float degree, float kelvin_cel);
float kelvin_fehrenheit(float degree, float kelvin_feh);

int main()
{
    string reset = "\033[0m";
    string red = "\033[1;31m";
    string cyan = "\033[1;36m";
    string bold = "\033[1;1m";
    float degree_celcius, degree_fehrenheit, degree_kelvin;
    float ce_feh, ce_kelvin;
    float feh_ce, feh_kelvin;
    float kelvin_cel, kelvin_feh;
    char from, to;
    cout << cyan << "*****************************" << endl
         << reset;
    cout << cyan << "FROM           |" << " TO" << endl
         << reset;
    cout << cyan << "*****************************" << endl
         << reset;
    cout << bold << "Celcius(c)     |" << "Celcius(c)\n"
         << reset;
    cout << bold << "fehrenheit(f)  |" << "fehrenheit(f)\n"
         << reset;
    cout << bold << "Kelvin(k)      |" << "Kelvin(k)\n";
    cout << bold << cyan << "******Conversion from******" << endl
         << reset;
    cout << bold << "FROM:  " << reset;
    cin >> from;
    cout << bold << "TO: " << reset;
    cin >> to;
    if (from == 'c' && to == 'f')
    {
        cout << "Enter Degree in Celcius: ";
        cin >> degree_celcius;
        cout << red << "Temperature from celcius to fehrenheit  = " << celcius_fehrenheit(degree_celcius, ce_feh) << endl
             << reset;
    }
    else if (from == 'c' && to == 'k')
    {
        cout << bold << "Enter Degree in Celcius: " << reset;
        cin >> degree_celcius;
        cout << red << "Temperature from celcius to kelvin = " << celcius_kelvin(degree_celcius, ce_kelvin) << endl
             << reset;
    }
    else if (from == 'f' && to == 'c')
    {
        cout << bold << "Enter Degree in fehrenheit: " << reset;
        cin >> degree_fehrenheit;
        cout << red << "Temperature from fehrenheit to celcius  = " << fehrenheit_celcius(degree_fehrenheit, feh_ce) << endl
             << reset;
    }
    else if (from == 'f' && to == 'k')
    {
        cout << bold << "Enter Degree in fehrenheit: " << reset;
        cin >> degree_fehrenheit;
        cout << red << "Temperature from fehrenheit to kelvin = " << fehrenheit_kelvin(degree_fehrenheit, feh_kelvin) << endl
             << reset;
    }
    else if (from == 'k' && to == 'c')
    {
        cout << bold << "Enter Degree in Kelvin: " << reset;
        cin >> degree_kelvin;
        cout << red << "Temperature from kelvin to celcius  = " << kelvin_celcius(degree_kelvin, kelvin_cel) << endl
             << reset;
    }
    else if (from == 'k' && to == 'f')
    {
        cout << bold << "Enter Degree in Kelvin: " << reset;
        cin >> degree_kelvin;
        cout << red << "Temperature  from kelvin to fehrenheit = " << kelvin_fehrenheit(degree_kelvin, kelvin_feh) << endl
             << reset;
    }
    getch;
}

float celcius_fehrenheit(float degree_celcius, float ce_feh)
{
    ce_feh = degree_celcius * (1.8) + 32;
    return ce_feh;
}

float celcius_kelvin(float degree_celcius, float ce_kelvin)
{
    ce_kelvin = degree_celcius + 273.15;
    return ce_kelvin;
}

float fehrenheit_celcius(float degree_feh, float feh_ce)
{
    feh_ce = (degree_feh - 32) * 0.555;
    return feh_ce;
}

float fehrenheit_kelvin(float degree_feh, float feh_kelvin)
{
    feh_kelvin = (degree_feh - 32) * 0.555 + 273.15;
    return feh_kelvin;
}

float kelvin_celcius(float degree_kelvin, float kelvin_cel)
{
    kelvin_cel = degree_kelvin - 273.15;
    return kelvin_cel;
}

float kelvin_fehrenheit(float degree_kelvin, float kelvin_feh)
{
    kelvin_feh = (degree_kelvin - 273.15) * 1.8 + 32;
    return kelvin_feh;
}
