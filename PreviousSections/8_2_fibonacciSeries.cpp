#include <iostream>
using namespace std;

int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    int f1 = fib(n - 1);
    int f2 = fib(n - 2);

    return f1 + f2;
}

int main()
{

    int a;
    cout << "Enter the number to find fib: ";
    cin >> a;

    for (int i = 0; i <= a; i++)
    {
        cout << fib(i) << " ";
    }

    return 0;
}