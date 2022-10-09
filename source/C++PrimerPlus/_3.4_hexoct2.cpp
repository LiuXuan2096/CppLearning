// page 46
#include <iostream>

using namespace std;

int main()
{
    int chest = 42;
    int waist = 0x42;
    int inseam = 042;

    cout << "Monsieur cuts a striking figure!\n";
    cout << "chest = " << chest << " (decimal for 42)\n";
    cout << hex;
    cout << "waist = " << waist << " (hexadecimal for 42)\n";
    cout << oct;
    cout << "inseam = " << inseam << " (octal for 42)\n";
    return 0;
}