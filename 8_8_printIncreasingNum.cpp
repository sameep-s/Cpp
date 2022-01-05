#include <iostream>
#include <vector>
using namespace std;

vector<int> increasingNumbers(int n)
{
    vector<int> v;
    if (n > 0)
    {
        increasingNumbers(n - 1);
        // cout << n << " ";
        v.push_back(n);
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return v;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    increasingNumbers(n);

    return 0;
}