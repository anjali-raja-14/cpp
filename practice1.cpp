
// WAP to print sum of negative no ,sum of positive even no.,sum of positive odd numbers 
 //from the lsit of no. entered by user .the list terminate when user input 0   
 #include<iostream>
 using namespace std;
 int main()
 
 {  int n,sumneg,sumeven,sumodd;
    sumneg=sumeven=sumodd=0;
    do{
    cout<<"Enter the number: ";
    cin>>n;
    //sum of negative no.
    if(n<0)
    {
        sumneg=sumneg+n;
    }
    //sum of positive even no.
    else if(n>0&&n%2==0)
    {
        sumeven=sumeven+n;
    }
    //sum of positive odd no.
     else 
    {
       sumodd=sumeven+n;  
    }
    }while(n!=0);
    cout<<"Sum of Negative Numbers: "<<sumneg<<endl;
    cout<<"Sum of Positive even  Numbers: "<<sumeven<<endl;
    cout<<"sum of positive odd numbers:"<<sumodd;
 
    return 0;
 }



