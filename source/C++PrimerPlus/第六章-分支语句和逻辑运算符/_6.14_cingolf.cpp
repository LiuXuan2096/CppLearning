// page 189
#include <iostream>

using namespace std;

const int Max = 5;

int main()
{
    int golf[Max];
    cout << "Please enter your golf scores.\n";
    cout << "You must enter " << Max << " rounds.\n";
    int i;
    for (i = 0; i < Max; i++)
    {
        /* code */
        cout << "round #" << i + 1 << ": ";
        while (!(cin >> golf[i]))
        {
            /* code */
            cin.clear();
            while (cin.get() != '\n')
            {
                /* code */
            }
            cout << "Please enter a number: ";
        }
    }
    double total = 0.0;
    for (i = 0; i < Max; i++)
    {
        /* code */
        total += golf[i];
    }
    cout << total / Max << " = average score "
         << Max << " rounds\n";
    return 0;  
}