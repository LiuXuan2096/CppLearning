// page 99
#include <iostream>

using namespace std;

int main()
{
    int updates = 6;
    int * P_updates;
    P_updates = &updates;

    cout << "Values: updates = " << updates;
    cout << ", *p_updates = " << *P_updates << endl;

    cout << "Addresses: &updates = " << &updates;
    cout << ", p_updates = " << P_updates << endl;

    *P_updates = *P_updates + 1;
    cout << "Now updates = " << updates << endl;
    return 0;
}