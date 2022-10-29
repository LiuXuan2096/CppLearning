// page 184
#include <iostream>
enum {red, orange, yellow, green, blue, violet, indigo};

using namespace std;

int main()
{
    cout << "Enter color code (0-6): ";
    int code;
    cin >> code;
    while (code >= red && code <= indigo)
    {
        /* code */
        switch (code)
        {
        case red:
            /* code */
            cout << "red" << endl;
            break;
        case orange:
            cout << "orange" << endl;
            break;
        case yellow:
            cout << "yellow" << endl;
            break;    
        case green:
            cout << "green" << endl;
            break;
        case blue:
            cout << "blue" << endl;
            break;
        case violet:
            cout << "violet" << endl;
            break;
        case indigo:
            cout << "indigo" << endl;
            break;
        
        default:
            break;
        }
        cout << "Enter color code (0-6): ";
        cin >> code;
    }
    cout << "Bye\n";
    return 0;
    
}