#include <iostream>
using namespace std;

int countBits(int n)
{
    int count = 0;
    while (n > 0)
    {
        int lastBit = (n & 1);
        count += lastBit;

        n = (n >> 1);
    }

    return count;
}

//(Faster method): counting bits hack.
int countBits_Hack(int n)
{
    int ans = 0;
    while (n > 0)
    {
        n = n & (n - 1);
        ans++;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "The number of set bits are: " << countBits(n) << endl;

    cout << "The number of set bits are(Hack method): " << countBits_Hack(n) << endl;

    return 0;
}