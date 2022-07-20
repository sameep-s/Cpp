#include <iostream>
#include <vector>
using namespace std;

int largestElement(vector<int> arr)
{
    int largest = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        largest = max(largest, arr[i]);
    }
    cout << largest << endl;
    return largest;
}

int main()
{
    vector<int> arr = {-3, 4, 1, 2, 3};
    vector<int> arr1 = {-1, -2, -3, -3, 8};

    largestElement(arr);
    largestElement(arr1);

    return 0;
}