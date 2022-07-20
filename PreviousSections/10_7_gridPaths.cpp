#include <iostream>
using namespace std;

int gridWays(int i, int j, int m, int n)
{
    // if we hit the target.
    if (i == (m - 1) && j == (n - 1))
    {
        return 1;
    }

    // edge case if our computation goes out of bounds.
    if (i >= m || j >= n)
    {
        return 0;
    }

    return (gridWays(i + 1, j, m, n) + gridWays(i, j + 1, m, n));
}

int main()
{
    int m, n;
    cout << "Enter the value of m and n: ";
    cin >> m >> n;

    cout << gridWays(0, 0, m, n);

    return 0;
}