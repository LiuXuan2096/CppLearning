// page 187
#include <iostream>

using namespace std;

const int Max = 5;
int main()
{
    double fish[Max];
    cout << "Please enter the weights of your fish.\n";
    cout << "You may enter up to " << Max
         << " fish <q to terminate>.\n";
    cout << "fish #1: ";
    int i = 0;
    while (i < Max && cin >> fish[i])
    {
        /* code */
        if (++i < Max)
        {
            /* code */
            cout << "fish #" << i+1 << ": ";
        }
    }
     double total = 0.0;
        for (int j = 0; j < i; j++)
        {
            /* code */
            total += fish[j];
        }
        if (i == 0)
        {
            /* code */
            cout << "No fish\n";
        }
        else
        {
            cout << total / i << " = avarage weight of "
                 << i << " fish\n";
        }
        cout << "Done.\n";
        
    return 0;
    
}