// page 168 if else语句
#include <iostream>

using namespace std;

int main()
{
    char ch;

    cout << "Type, and I shall repeat.\n";
    cin.get(ch);
    while (ch != '.')
    {
        /* code */
        if (ch == '\n')
        {
            /* code */
            cout << ch;
        }
        else 
        {
            cout << ++ch;
        }
        cin.get(ch);
    }
    cout << "\nPlease excuse the slight confusion.\n";
    return 0;
    
}