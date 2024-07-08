//The code you provided is mostly correct, but the sleep function is not compatible with Windows. Here's the fixed code for Windows:

#include <iostream>
#include <ctime>
#include <windows.h> // for Sleep function

int main() {
  while (1)
   {
    // Get the current time
    time_t now = time(0);
    tm *lt = localtime(&now);

    // Print the current time
    std::cout << "Current Time: " << lt->tm_hour << ":" << lt->tm_min << ":" << lt->tm_sec << std::endl;

    // Wait for 1 second
    Sleep(1000); // use Sleep instead of sleep
    
  }

  return 0;
}

