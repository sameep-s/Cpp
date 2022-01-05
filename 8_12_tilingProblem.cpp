#include <iostream>
using namespace std;

int tilingProb(int n, int m)
{
    // base base
    if (n < m)
    {
        return 1;
    }

    // recursive case
    return (tilingProb(n - 1, m) + tilingProb(n - m, m));
}

int main()
{
    int n, m;
    cout << "Enter the value of n and m: ";
    cin >> n >> m;

    cout << tilingProb(n, m) << endl;

    return 0;
}