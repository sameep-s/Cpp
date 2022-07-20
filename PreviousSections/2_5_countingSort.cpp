// Counting sort works in linear time O(range + N)

#include <iostream>
#include <vector>
using namespace std;

void countingSort(int arr[], int n)
{
    // Find largest elements
    int largest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        largest = max(largest, arr[i]);
    }

    // create a count array/vector
    vector<int> freq(largest + 1, 0);

    // Update freq vector O(N)
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    // put back elements in origianl array
    int j = 0;
    for (int i = 0; i <= largest; i++)
    {
        while (freq[i] > 0)
        {
            arr[j] = i;
            freq[i]--;
            j++;
        }
    }
}

int main()
{
    int arr[] = {88, 97, 10, 12, 15, 1, 5, 6, 12, 8, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    countingSort(arr, n);

    for (auto x : arr)
    {
        cout << x << " ";
    }

    return 0;
}