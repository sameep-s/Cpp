#include <iostream>
#include <vector>
using namespace std;

int maxSumSubarray(vector<int> A)
{
    int sum = 0, largest = 0, i = 0;
    while ((i < A.size()) && (A.size() > 1))
    {
        if (sum < 0)
        {
            sum = 0;
        }

        sum = sum + A[i];
        largest = max(largest, sum);

        i++;
    }
    cout << largest << endl;
    return largest;
}

int main()
{
    vector<int> arr1 = {1, -2, 3, 4, 4, -2};
    vector<int> arr2 = {5, 0, -1, 0, 1, 2, -1};

    maxSumSubarray(arr1);
    maxSumSubarray(arr2);

    return 0;
}