// print 1,2,3,4,5,6,7
//  #include<iostream>
//  #include<vector>
//  using namespace std;
//  int main()
//  {
//      vector<int>v={1,2,3,4,5,6,7};
//      vector<int>::iterator it;
//      for( it=v.begin();it!=v.end();it++)
//      {
//      cout<<*it<<endl;
//      }
//      return 0;
//  }

// 7,6,5,4,3,2,1,0
// reverse_iterator
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    vector<int>::reverse_iterator rit;
    cout << "Print in Reverse order:\n";
    for (rit = v.rbegin(); rit != v.rend(); rit++)
    {
        cout << *rit << "\t";
    }
    return 0;
}