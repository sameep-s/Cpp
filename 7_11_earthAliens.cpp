#include <iostream>
using namespace std;

int earthLevel(int n)
{
    int s = 0;
    while (n > 0)
    {
        n = n & (n - 1);
        s++;
    }

    return s;
}

int main()
{
    int n;
    cout << "Enter the Number of steps: ";
    cin >> n;

    cout << "steps Required are: " << earthLevel(n);

    return 0;
}