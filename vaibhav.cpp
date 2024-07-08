#include <iostream>
using namespace std;
int main()
{
void function factorial(n)
 {
  if (n == 0) {
    return 1; // base case
  } else {
    return n * factorial(n-1); // recursive call
  }
}

}