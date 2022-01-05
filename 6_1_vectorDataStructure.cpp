#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Demo Vector
    vector<int> arr = {1, 2, 3, 4, 5, 6, 6};

    // Fill constructor
    vector<int> arr1(10, 0);

    arr.push_back(55);

    // Size of vector
    cout << "size: " << arr.size() << endl;

    // capacity of vector
    cout << "capacity: " << arr.capacity() << endl;

    return 0;
}