// sum of product all the pairs of array elements
//(10,1)(10,3)(10,-4)(10,7)(10,5)
//(1,3)(1,-4)(1,7)(1,5)
//(3,-4)(3,7)(3,5)
//(-4,7)(-4,5)
//(7,5)
//10+30-40+70+50+3-4+7+6-12+21+15-28-20+35=142 

#include <iostream>
using namespace std;
int  main()
{
int total=0,product;
    int arr[10]={10,1,3,-4,7,5};
    for(int i=0;i<6;i++)
    {
       for(int j=i+1;j<6;j++)
       {
        product=arr[i]*arr[j];
          total=total+product;
       }
    }
    cout<<total;
}