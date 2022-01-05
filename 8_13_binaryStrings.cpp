#include <iostream>
using namespace std;

unsigned int binaryStrings(unsigned int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n == 1)
    {
        return 2;
    }

    return (binaryStrings(n - 1) + binaryStrings(n - 2));
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << binaryStrings(n);

    return 0;
}