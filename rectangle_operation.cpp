
#include<iostream>
#include<math.h>
using std::cout;
using std::cin;
using std::endl;
int main()
{   int ch;
    char ch1;
    float Length,Breadth,Perimeter,Area,Diagonal;
    cout<<"\n************************\n";
    cout<<"Rectangle Menu\n";
    cout<<"\n 1. Area";
    cout<<"\n 2.Perimeter";
    cout<<"\n 3.Diagonal";
    cout<<"\n 4.Exit"<<"\n";
    cout<<"Enter your choice:";
    do{
    cin>>ch;
    if(ch==1||ch==2||ch==3)
    {
        cout<<"Enter the length: ";
        cin>>Length;
        cout<<"Enter the breadth: ";
        cin>>Breadth;
    }
    switch(ch)
    {
       case 1:Area=Length*Breadth;
       cout<<"Area=Length*Breadth\n";
       cout<<Length<<"*"<<Breadth;
       cout<<":"<<Area;
       break;
       case 2:Perimeter=2*(Length+Breadth);
       cout<<"Perimeter=2*(Length+Breadth)\n";
       cout<<"2 *("<<Length<<"+"<<Breadth<<")";
       cout<<":"<<Perimeter;
       break;
       case 3:Diagonal=sqrt((Length*Length)+(Breadth*Breadth));
       cout<<"sqrt(("<<Length<<"*"<<Length<<")+("<<Breadth<<"*"<<Breadth<<"))";
       cout<<": "<<Diagonal;
       break;
       case 4:cout<<"Breaking";
       exit(0);
       deafult:cout<<"Wrong choice!!!!!";
       cout<<"Enter a valid one";
       break;  
    }
    cout<<"\n Want to Enter more: (y/n)?: ";
    cin>>ch1;
    if(ch1=='y'||ch1=='Y')
    {
        cout<<"Again Enter choice (1-4): ";
    }
    }while(ch1=='y'||ch1=='Y');
    return 0;
}
