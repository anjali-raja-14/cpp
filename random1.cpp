//  computerChoice = rand() % 3 + 1;
#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int n=rand()%100+1;
    cout<<n;
}