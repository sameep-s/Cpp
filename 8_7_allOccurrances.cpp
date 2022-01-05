#include <iostream>
#include <vector>
using namespace std;

int allIndexesRecursive(int a[], int n, int key, int output[])
{
    if (n == 0)
    {
        return 0;
    }

    int smallAns = allIndexesRecursive(a, n - 1, key, output);

    if (a[n - 1] == key)
    {
        output[smallAns++] = n - 1;
    }

    return smallAns;
}

void allIndexes(int a[], int n, int key)
{
    int output[n];

    int size = allIndexesRecursive(a, n, key, output);
    cout << "hello" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << output[i] << " ";
    }

    // return output;
}

int main()
{

    int arr[] = {1, 2, 5, 3, 1, 2, 3, 8, 6, 3, 6, 3, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    // key
    int key;
    cout << "Enter key: ";
    cin >> key;

    allIndexes(arr, n, key);

    return 0;
}