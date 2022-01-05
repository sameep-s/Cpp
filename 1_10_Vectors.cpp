#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Demo Vectors
    vector<int> arr = {1, 2, 3, 4, 5, 21, 99};

    // Fill constructor
    vector<int> arr2(10, 7);

    // push_back- O(n)
    arr.push_back(16);

    // pop_back -O(n)
    arr.pop_back();

    // size of vector
    cout
        << "Size of Vector : " << arr.size() << endl;

    // capacity
    cout << "Capacity of Vector : " << arr.capacity() << endl;

    for (int i; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}