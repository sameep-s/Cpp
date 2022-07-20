// using bitwise operator.
#include <iostream>
using namespace std;

void oddEven(int x)
{
    if (x & 1)
    {
        cout << x << " is odd." << endl;
    }
    else
    {
        cout << x << " is Even." << endl;
    }
}

int main()
{
    int x;
    cout << "Enter the number: ";
    cin >> x;

    oddEven(x);

    return 0;
}