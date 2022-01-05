// convert to binary using bitwise operator

#include <iostream>
using namespace std;

int convertToBinary(int n)
{
    int ans = 0, pow = 1;
    while (n > 0)
    {
        int lastBit = (n & 1);
        ans += pow * lastBit;

        pow = pow * 10;
        n = n >> 1;
    }

    return ans;
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Binary of " << n << " is :" << convertToBinary(n);

    return 0;
}