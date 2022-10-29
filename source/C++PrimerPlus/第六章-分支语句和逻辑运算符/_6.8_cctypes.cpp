// page 178
#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    cout << "Enter text for analysis, and type @"
            " to terminate input." << endl;
    char ch;
    int whitespace = 0;
    int digits = 0;
    int chars = 0;
    int punct = 0;
    int others = 0;

    cin.get(ch);
    while (ch != '@')
    {
        /* code */
        if (isalpha(ch))
        {
            /* code */
            chars++;
        }
        else if (isspace(ch))
        {
            /* code */
            whitespace++;
        }
        else if (isdigit(ch))
        {
            /* code */
            digits++;
        }
        else if (ispunct(ch))
        {
            /* code */
            punct++;
        }
        else
        {
            others++;
        }
        cin.get(ch);
    }
    cout << chars << " letters, "
         << whitespace << " whitespace, "
         << digits << " digits, "
         << punct << " punctuations, "
         << others << " others." << endl;
    return 0;
}