#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    string encrypted_msg,decrypted_msg;
    string alphabets={"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 '",};
    string key={"ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba135792468@!#"};
    string msg;
    cout<<"Enter the message: ";
    getline(cin,msg);
    cout<<"\nEncrypting msg..........."<<endl;
    for(char c:msg)
    {
        size_t position=alphabets.find(c);//size_t=unsigned type
        if(position!=string::npos)//npos=unsuccesful search
        {
            char new_c=key.at(position);
            encrypted_msg+=new_c;
        }
        else
        {
            encrypted_msg+=c;
        }
    }
    cout<<"\n Encrypted msg....."<<encrypted_msg<<endl;
    cout<<"\nDecrypting msg..........."<<endl;
    for(char c:msg)
    {
        size_t position=alphabets.find(c);//size_t=unsigned type
        if(position!=string::npos)//npos=unsuccesful search
        {
            char new_c=alphabets.at(position);
            decrypted_msg+=new_c;
        }
        else
        {
            decrypted_msg+=c;
        }
    }
    cout<<"\n Decrypted msg....."<<decrypted_msg<<endl;
     getch();
   
}




