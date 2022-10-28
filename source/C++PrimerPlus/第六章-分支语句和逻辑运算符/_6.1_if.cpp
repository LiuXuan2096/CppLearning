// page 166
#include <iostream>

using namespace std;

int main()
{
    char ch;
    int space = 0;
    int total = 0;
    cin.get(ch);
    while (ch != '.')
    {
        /* code */
        if (ch == ' ')
        {
            /* code */
            ++space;
        }
        ++total;
        cin.get(ch);
    }
    cout << space << " spaces, " << total;
    cout << " characters total in sentence\n";
    return 0;
}