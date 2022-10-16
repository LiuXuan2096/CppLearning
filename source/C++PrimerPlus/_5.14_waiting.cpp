// page 149
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    cout << "Enter the delay time, in secends: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;
    cout << "starting\a\n";
    clock_t start = clock();
    while (clock() - start < delay)
    {
        /* code */
        ;
    }
    cout << "Done \a\n";
    return 0;
    
}