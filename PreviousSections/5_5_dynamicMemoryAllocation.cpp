#include <iostream>
using namespace std;

// using new and delete keyword
int main()
{
    int n;
    cin >> n;

    // Dynamic array
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
        cout << arr[i] << " ";
    }

    delete[] arr;

    return 0;
}