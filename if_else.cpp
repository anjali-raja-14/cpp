#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
int money;
cout<<"Enter how much money you have:";
cin>>money;
if(money>1000)
{
    cout<<"You can go to coffee house"<<endl;
    cout<<"you can eat idli dosa "<<endl;
}
else
{
    cout<<"Go to home"<<endl;
    cout<<"Do your study as well"<<endl;
}
cout<<"Thank you"<<endl;
return 0;
}