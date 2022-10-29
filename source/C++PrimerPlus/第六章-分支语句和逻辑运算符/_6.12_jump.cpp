// page 186
#include <iostream>

using namespace std;

const int ArSize = 80;

int main()
{
    char line[ArSize];
    int spaces = 0;

    cout << "Enter a line of text:\n";
    cin.get(line, ArSize);
    cout << "Complete line:\n" << line << endl;
    cout << "Line through first period:\n";
    for (int i = 0; line[i] != '\0'; i++)
    {
        /* code */
        cout << line[i];
        if (line[i] == '.')
        {
            /* code */
            break;
        }
        if (line[i] != ' ')
        {
            /* code */
            continue;
        }
        spaces++;
         
    }
    cout << "\n" << spaces << " spaces\n";
    cout << "Done.\n";
    return 0;
    
}