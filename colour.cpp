// //In C++, you can add color to your output using escape sequences.

// #include <iostream>
// using namespace std;
// int main() 
// {
//   // Reset (default color)
//   string reset = "\033[0m";

//   // Col
  
//   string red = "\033[1;31m";
// //   string green = "\033[1;32m";
// //   string blue = "\033[1;34m";

//   // Output with color
//   cout << red << "Hii Vaibhav" << reset  ;
// //   cout << green << "Krr Diyaa Tumne Code Send!!!" << reset ;
// //   cout << blue << "vese......\nKesa Lgaa Meraa Code" << reset  ;
//   return 0;

// }


//In C++, you can add color to your output using escape sequences.

#include <iostream>
using namespace std;
int main() 
{
    //reset
  string reset = "\033[0m";
  //colour
  string blue = "\033[1;34m";
  // Output with color
  cout << blue << "Hii Vaibhav" << reset  ;
  return 0;

}

// Here are some additional escape sequences:

// 1. Bright/High-Intensity Colors:
//     - Bright Red: \033[91m
//     - Bright Green: \033[92m
//     - Bright Yellow: \033[93m
//     - Bright Blue: \033[94m
//     - Bright Magenta: \033[95m
//     - Bright Cyan: \033[96m
// 2. Background Colors:
//     - Black Background: \033[40m
//     - Red Background: \033[41m
//     - Green Background: \033[42m
//     - Yellow Background: \033[43m
//     - Blue Background: \033[44m
//     - Magenta Background: \033[45m
//     - Cyan Background: \033[46m
//     - White Background: \033[47m
// 3. Text Styles:
//     - Bold: \033[1m
//     - Underline: \033[4m
//     - Italic: \033[3m
//     - Strikethrough: \033[9m
// 4. Reset:
//     - Reset all styles: \033[0m
//     - Reset color: \033[39m
//     - Reset background color: \033[49m
