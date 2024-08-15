#include <iostream>
using namespace std;
int main()
{
    // Cursor Controls
    string CursorMoveToRight="\x1b[40C";
    string SaveCursor="\x1b[s";
    string RestoreCursor="\x1b[u";

    //Erase Functions
    string CursorToBeginning="\x1b[1J";

    // Text Styles
    string Bold="\x1b[1m";
    string Italics="\x1b[3m";

    // Colors
    string Red="\x1b[38;5;124m";
    string Green="\x1b[32m";
    string Yellow="\x1b[33m";
    string Blue="\x1b[34m";
    string White="\x1b[37m";
    string Default="\x1b[39m";
    string Reset="\x1b[0m";
    string Orange="\x1b[38;5;208m";
    string Pink="\x1b[38;5;200m";
    
    char ch=3;
    cout<<endl<<endl<<CursorMoveToRight;
    cout<<"Happy "<<"Friendship Day "<<"to my "<<"Best Friend "<<"Anjali "<<ch<<" "<<ch<<" "<<ch<<" "<<ch<<" "<<ch<<endl<<endl;
    cout<<CursorMoveToRight;
    cout<<"Press Enter to See the Magic";
    getchar();
    cout<<CursorToBeginning<<Bold<<Italics;
    for(int i=1;i<=50;i++)
    {
        cout<<CursorMoveToRight;
        cout<<Red<<"Happy "<<Yellow<<"Friendship Day "<<Blue<<"to my "<<Green<<"Best Friend "<<Pink<<"Anjali "<<Red<<ch<<" "<<Yellow<<ch<<" "<<Blue<<ch<<" "<<Green<<ch<<" "<<Pink<<ch<<endl;
    }
    cout<<Reset;
}