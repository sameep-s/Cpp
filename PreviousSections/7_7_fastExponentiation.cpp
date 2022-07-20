#include <iostream>
using namespace std;

// Fast Exponentiation
int fastExponentiation(int a, int n)
{
    int ans = 1;
    while (n > 0)
    {
        int lastBit = (n & 1);
        if (lastBit)
        {
            ans = ans * a; // if the bit is 1(activated) it multiplies the power of a to answer.
        }
        a = a * a; // this is to keep increasing the power of a.
        n = n >> 1;
    }

    return ans;
}

int main()
{
    int a, n;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Fast Exponentiation of (a^n): " << fastExponentiation(a, n) << endl;

    return 0;
}