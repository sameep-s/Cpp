#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if ((n & (n - 1)) == 0)
    {
        cout << n << " is in power of two." << endl;
    }
    else
    {
        cout << "The number is not in power of two.";
    }

    return 0;
}