#include <iostream>
#include<cmath>

using namespace std;
int main()
{
    double x;
    cout<<"Enter the value for x: ";
    cin>>x;
    double radian=x*M_PI/180;
    //1 radian= 57.3 degrees
    //Degrees = Radians × 180 / π
    //M_PI =3.14=pie value

    cout<<"Sin"<<x<<"="<<sin(radian)<<endl;
     cout<<"Cos"<<x<<"="<<cos(radian)<<endl;
     cout<<"Tan"<<x<<"="<<tan(radian)<<endl;
    cout<<"Cosecant"<<x<<"="<<1/sin(radian)<<endl;
    cout<<"sec"<<x<<"="<<1/cos(radian)<<endl;
     cout<<"cot"<<x<<"="<<1/tan(radian)<<endl;
    return 0;
}