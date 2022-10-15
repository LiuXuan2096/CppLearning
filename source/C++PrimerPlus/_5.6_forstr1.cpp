// page 133
#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Enter a word: ";
    string word;
    cin >> word;

    for (int i = word.size() - 1; i >= 0; i--)
    {
        /* code */
        cout << word[i];
    }
    cout << "\nBye.\n";
    return 0;
}