//WAp to print largest even and largest odd
// list terminate when 0 entered
#include <iostream>
using namespace std;
int main()
{
int num,leven=0,lodd=1;
cout<<"0 to terminate\n";
do{
cout<<"Enter the Number : ";
cin>>num;
if(num%2==0)
{
    if(num>leven)
leven=num;
}
else
{
    if(num>lodd)
    lodd=num;
}
}while(num!=0);
cout<<"\n Largest Even Number: "<<leven;
cout<<"\n Largest odd Number: "<<lodd;

    return 0;
}