#include <iostream>
using namespace std;

int friendsPairing(int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n == 1 || n == 2)
    {
        return n;
    }

    return (friendsPairing(n - 1) + (n - 1) * friendsPairing(n - 2));
}

int main()
{
    int n;
    cout << "Enter the number of friends: ";
    cin >> n;

    cout << friendsPairing(n);

    return 0;
}