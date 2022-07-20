#include <iostream>
#include <vector>
using namespace std;

void findUnique(vector<int> v)
{
    int ans = 0;
    for (auto x : v)
    {
        ans ^= x;
    }

    cout << "The Unique Element in the array is: " << ans << endl;
}

int main()
{
    // XORing - XOR of any number with zero is the number itself, and XOR of number with itself is zero.
    vector<int> v = {1, 2, 3, 1, 4, 2, 3};

    findUnique(v);

    return 0;
}