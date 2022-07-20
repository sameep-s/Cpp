#include <iostream>
using namespace std;

/*
// Brute Force - O(n^3);
// Brute force approach
void printSubArray(int arr[], int n)
{
    int arraryNumber = 1;
    int temp = 0;
    int arrIndx;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0; // current sum
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            cout << "Sum " << arraryNumber << " : " << sum << endl;

            if (sum > temp)
            {
                temp = sum;
                arrIndx = arraryNumber;
            }

            arraryNumber++;
        }
    }
    cout << endl;
    cout << "The biggest sum is : " << temp << ", of sub-Array " << arrIndx;
}
*/

// Prefix sum approach(O(n^2)).
void prefixApproach(int arr[], int n)
{

    // Prefix Sums
    int prefix[n] = {0};
    prefix[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    // largest sum login
    int largest_sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int subarraySum = i > 0 ? (prefix[j] - prefix[i - 1]) : prefix[j];
            // put a check is subarraySum > largest_sum
            largest_sum = max(largest_sum, subarraySum);
        }
    }
    cout << "The biggest sum is : " << largest_sum << endl;
}

int main()
{
    // Array containing.
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);

    // printSubArray(arr, n);
    prefixApproach(arr, n);

    return 0;
}