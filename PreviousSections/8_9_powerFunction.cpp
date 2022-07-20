#include <iostream>
using namespace std;

// power function(self)
int powerFunc(int a, int n)
{
    if (n == 0)
    {
        return 1;
    }

    int b = powerFunc(a, n - 1);
    b = b * a;

    // cout << "The value of a^n is: " << b << endl;

    return b;
}

// power 1st method
// time=O(N)
// space=O(N)

int power(int a, int n)
{
    // base case
    if (n == 0)
    {
        return 1;
    }

    return a * power(a, n - 1);
}

// Optimised solution
// Time log(N)
// space log(N)

int powerOptimized(int a, int n)
{
    if (n == 0)
    {
        return 1;
    }

    int subProb = powerOptimized(a, n / 2);
    int subProbSq = (subProb * subProb);

    if (n & 1)
    {
        return a * subProbSq;
    }
    else
    {
        return subProbSq;
    }
}

int main()
{
    int a, n;
    cout << "Enter the values of 'a' and 'n': " << endl;
    cin >> a >> n;

    // cout << "The value of a^n is: " << powerFunc(a, n) << endl;

    cout << "The value of a^n is: " << powerOptimized(a, n) << endl;

    return 0;
}