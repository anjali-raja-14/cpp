// #include<iostream>
// using namespace std;
// int main()
// {
//     int data[ ]={1,10,-1,5,6,-1,7,-99,8,10};
//     for(auto n:data)
//     {
//         if(n==-99)
//         {
//             break;
//         }
//        if(n<0)
//        {
//         continue;
//        } 
//        cout<<n<<"\t";
      
       
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main()
{
    int data[10]={1,10,-1,5,6,-1,7,-99,8,10};
    for(int i=1;i<=8;i++)
    {
       if(data[i]<0)
       {
        continue;
       } 
       cout<<data[i]<<"\t";
    }
    return 0;
}