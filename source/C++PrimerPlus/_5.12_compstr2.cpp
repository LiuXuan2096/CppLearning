// page 144
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word = "?ate";
    for (char ch = 'a'; word != "mate"; ch++)
    {
        /* code */
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loop ends, word is " << word << endl;
    return 0;
    
}