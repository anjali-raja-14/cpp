#include<iostream>
using namespace std;
int main()
{
int date,month ,year;
int current_date,current_month,current_year;
cout<<"Enter your Date of Birth\n";
cout<<"Enter the Date: ";
cin>>date;
cout<<"Enter the Month: ";
cin>>month;
cout<<"Enter the Year: ";
cin>>year;
cout<<"Enter the current Date: ";
cin>>current_date;
cout<<"Enter the current Month: ";
cin>>current_month;
cout<<"Enter the current Year: ";
cin>>current_year;
int age_date=current_date-date;
int age_month=current_month-month;
int age_year=current_year-year;
cout<<"Your Age:\n";
cout<<age_year<<" years"<<age_month<<" months"<<age_date<<"days";
}