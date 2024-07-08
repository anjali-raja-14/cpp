//LEAP YEAR CODE
 #include<iostream>
 using std::cout;
 using std::cin;
 using std::endl;
 int main()
 //400  800  1200  1600(y%4==0)THERE IS A DIFFRENCE OF 400 YEARS
 //2012 2016  2000 2024(y%400==0)THE DIFFRENCE COULD BE DIVISIBLE BY 4
 //2100 2200 2300 2400(y%400!=0)THE DIFFRENCE COULD NOT EQUAL TO 100
 {
    int y;
    cout<<"Enter any year::";
    cin>>y;
    if(y%400==0||y%4==0&&y%100!=0)
    {
        cout<<y<<" "<<"is a leap year";
    }
    else
    cout<<y<<" "<<"is not a leap year";
    return 0;
 }