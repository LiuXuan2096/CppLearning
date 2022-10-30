// page 226
#include <iostream>

using namespace std;

unsigned int c_in_str(const char * str, char ch);

int main()
{
    char mmm[15] = "minium";
    char *wail = "ululate";

    unsigned int ms = c_in_str(mmm, 'm');
    unsigned int us = c_in_str(wail, 'u');
    cout << ms << " m characters in " << mmm << endl;
    cout << us << " u characters in " << wail << endl;
    cout << " the content of mmm is: " << mmm << endl;
    return 0;
}

unsigned int c_in_str(const char * str, char ch)
{
    unsigned int count = 0;

    while (*str)
    {
        /* code */
        if (*str == ch)
        {
            /* code */
            count++;
        }
        str++;
    }
    return count;
    
}