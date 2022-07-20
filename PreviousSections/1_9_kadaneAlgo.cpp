#include <iostream>
using namespace std;

// Complexity-> O(n)
void kadaneAlgo(int arr[], int n)
{
    int cs = 0, largest = 0;
    for (int i = 0; i < n; i++)
    {
        cs += arr[i];
        if (cs < 0)
        {
            cs = 0;
        }
        largest = largest > cs ? largest : cs;
        // largest = max(largest, cs);
    }
    cout << "Max sum of subArray is : " << largest << endl;
}

int main()
{
    // Array containing.
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);

    // printSubArray(arr, n);
    kadaneAlgo(arr, n);

    return 0;
}