// page 170 if else if 语句
#include <iostream>

using namespace std;

const int Fave = 27;

int main()
{
    int n;

    cout << "Enter a number in the range 1-100 to find ";
    cout << "my favorite number: ";
    do
    {
        /* code */
        cin >> n;
        if (n < Fave)
        {
            /* code */
            cout << "Too low -- guess again: ";
        } else if (n > Fave)
        {
            /* code */
            cout << "Too high -- guess again: ";
        }
        else
        {
            cout << Fave << " is right!\n";
        }
     
    } while (n != Fave);
    return 0;
}