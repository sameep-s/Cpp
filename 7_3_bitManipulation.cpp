#include <iostream>
using namespace std;

// get ith bit
int getIthbit(int n, int i)
{
    int mask = (1 << i);
    return (n & mask) > 0 ? 1 : 0;
}

// clear ith bit
void clearIthbit(int &n, int i)
{
    int mask = ~(1 << i);
    n = (n & mask);
}

// set ith bit
void setIthbit(int &n, int i)
{
    int mask = (1 << i);
    n = (n | mask);
}

// clear last i-bits
void clearLastIbits(int &n, int i)
{
    int mask = (~0 << i);
    n = n & mask;
}

// clear range of bits --> in range i to j

void clearBitsInRange(int &n, int i, int j)
{
    int a = (~0 << (j + 1));
    int b = ((1 << i) - 1);

    int mask = a | b;

    n = n & mask;
}

int main()
{

    int n = 5;
    int i;

    cout << "Enter the index to get the bit : ";
    cin >> i;

    cout << "The bit at index " << i << " is: " << getIthbit(n, i) << endl;

    return 0;
}