#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        gcd(b, a % b);
    }
}

void leftRotate(vector<int> &arr, int k)
{
    int d, temp, j, rev = (arr.size() - (k));

    for (int i = 0; i < gcd(rev, arr.size()); i++)
    {
        j = i;
        temp = arr[i];
        while (1)
        {
            d = ((j + rev) % (arr.size()));

            if (d == i)
            {
                break;
            }
            arr[j] = arr[d];
            j = d;
        }
        arr[j] = temp;
    }

    // printArray(arr);
}

void printArray(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {1, 3, 5, 7, 9, 10, 12, 87};
    vector<int> arr2 = {1, 3, 5, 7, 9};

    cout << "gcd : " << gcd(arr.size(), 4) << endl;

    // cout << "Before: ";
    // printArray(arr);

    // leftRotate(arr, 2);

    // cout << "After: ";
    // printArray(arr);

    // -----------------------------------------------------------------------------

    cout << "Before: ";
    printArray(arr2);

    leftRotate(arr2, 2);

    cout << "After: ";
    printArray(arr2);

    return 0;
}