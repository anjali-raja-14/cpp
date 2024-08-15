#include <iostream>
using namespace std;
int main()
{
    int j;
    int Num1,Num2,Num3;
    cout<<"\x1b[65C"<<"\x1b[1m"<<"Enter 3 Numbers: "<<"\x1b[s";
    cin>>Num1>>Num2>>Num3;
    cout<<"\x1b[u"<<"\x1b[1J";
    int Nums[3]={Num1,Num2,Num3};
    cout<<"\x1b[10D"<<"\x1b[7;35m"<<"Tables"<<"\x1b[0m\n\n"; //Cursor Shift to Center, Text Color, Heading, Reset Color, Two New Lines
    for(int i=0;i<3;i++)
    {
        for(int j=1;j<=10;j++)
        {
            cout<<"\x1b["<<70*i<<"C";
            cout<<"\x1b[38;5;"<<j<<"m";
            cout<<Nums[i]<<" * "<<j<<" = "<<Nums[i]*j<<endl;
        }
        cout<<"\x1b[H"<<"\x1b[8B";
        cout<<"\x1b[39m";
    }
    cout<<"\x1b[H"<<"\x1b[18B";
}