#include <iostream>
#include <vector>
using namespace std;

void lowerBound(vector<int> arr, int n)
{
    int index = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == n)
        {
            index = i;
        }
        else if (arr[i] > n)
        {
            index = i - 1;
            break;
        }
    }
    cout << "value : " << arr[index] << endl;
}

int main()
{
    vector<int> arr = {-1, -1, 2, 3, 5};
    vector<int> arr2 = {1, 2, 3, 4, 6};

    lowerBound(arr, 4);
    lowerBound(arr2, 4);

    return 0;
}