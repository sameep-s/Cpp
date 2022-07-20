#include <iostream>
#include <algorithm> // inbuiltSort function is present in this header.
using namespace std;

// IMP - O(NlogN) which is more efficient than bubble,
// selection, insertion sort.

// this is a comparator function(in this case it is automatically called)
bool compare(int a, int b)
{
    cout << "Compairing " << a << " and " << b << endl;
    return a > b;
}

int main()
{
    int arr[] = {10, 9, 8, 6, 5, 4, 3, 2, 11, 16, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n, compare); // this function can also accept  function as a parameter known as comparator function.
    // reverse(arr, arr + n);

    // Print the output
    for (auto x : arr)
    {
        cout << x << ",";
    }

    return 0;
}