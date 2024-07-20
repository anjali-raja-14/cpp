#include<iostream>
using namespace std;
void sum();//Function define
int main()
{
   sum(); //Function calling 
   return 0;
}

 void sum()//Function Body
{
    int a,b;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Enter a number: ";
    cin>>b;
    cout<<"sum: "<<a+b;
}



// #include<iostream>
// using namespace std;
// void sum()//Function Body
// {
//     int a,b;
//     cout<<"Enter a number: ";
//     cin>>a;
//     cout<<"Enter a number: ";
//     cin>>b;
//     cout<<"sum: "<<a+b;
// }
// int main()
// {
//    sum(); //Function calling 
//    return 0;
// }
