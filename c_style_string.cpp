
#include <iostream>
#include <cstring>  
using namespace std;

int main() {
    char f_name[20], l_name[20], full_name[40];  // Increased size of full_name to accommodate both names

    cout << "Your First Name: ";
    cin >> f_name;

    cout << "Your Last Name: ";
    cin >> l_name;

    cout << endl << "****************" << endl;

    // Find String Length
    cout << ".STRING LENGTH" << endl;
    cout << "Hi! Your first Name contain " << strlen(f_name) << " characters" << endl;
    cout << "Last Name contain " << strlen(l_name) << " Characters" << endl << endl;

    // String copy
    cout << ".STRING COPY" << endl;
    strcpy(full_name, f_name);  // Don't cout here, strcpy returns the destination
    cout << full_name << endl;

    // STRING UPPER CASE
    cout << ".STRING UPPERCASE" << endl;
    for(int i = 0; i < strlen(f_name); i++) {
        f_name[i] = toupper(f_name[i]);  // toupper returns the upper case character, so assign it back to f_name
    }
    cout << f_name << endl;

    // String Concatenate
    cout << ".STRING CONCATENATE" << endl;
    strcat(full_name, " ");  // Add a space between names
    strcat(full_name, l_name);
    cout << full_name << endl;

    cout << endl;
    cout << "STRING COMAPARISON" << endl;
    if (strcmp(f_name, l_name) == 0) {
        cout << "The String is equal" << endl;
    } else {
        cout << "The strings are unequal" << endl;
    }

    return 0;
}


