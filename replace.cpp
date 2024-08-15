// #include<iostream>
// using namespace std;
// int main()
// {
//     string str;
//     cout<<"Enter any string: ";
//     cin>>str;
//     for(int i=0;i<=str.length();i++)
//     {
//         if(str[i]>='A'&&str[i]<='Z')
//         {
//             str[i]='*';
//         }
//         if(str[i]>='a'&&str[i]<='z')
//         {
//             str[i]='#';
//         }
//     }
//     cout<<str;//ABDDJBabbwef
//     //*****#######
//     return 0;
// }


#include<iostream>
#include<string>
#include<cctype>

using namespace std;
int main()
{
    string str;
    cout<<"Enter any string: ";
    cin>>str;
    for(int i=0;i<=str.length();i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
        else if(str[i]>='a'&&str[i]<='z')
        {
            str[i]=str[i]-32;
        }
    }
    cout<<str;
    return 0;
}