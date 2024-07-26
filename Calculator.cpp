#include <iostream>
using namespace std;

int main()
{

    int o1, o2;

    cout << "ENTER BOTH OPERANDS\n";
    cin >> o1 >> o2;

    int op;
    cout << "Select Operation\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n";
    cin >> op;
    switch (op)
    {
    case 1:
        cout << o1 + o2;
        break;

    case 2:
        cout << o1 - o2;
        break;

    case 3:
        cout << o1 * o2;
        break;

    case 4:
        if (o2 == 0)
        {
            cout << "CANNOT DIVIDE BY 0";
            break;
        }
        cout << o1 / o2;
        break;

    default:
        break;
    }
    return 0;
}