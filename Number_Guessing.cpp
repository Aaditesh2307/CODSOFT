#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int i = rand();
    int g;
    cout << "ENTER GUESS\n";
    while (true)
    {
        cin >> g;
        if (g < i)
        {
            cout << "Number is Higher\n";
        }
        else if (g > i)
        {
            cout << "Number is Lesser\n";
        }
        else
        {
            cout << "NUMBER IS CORRECT\n";
            break;
        }
    }
    return 0;
}