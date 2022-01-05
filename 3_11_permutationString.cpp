#include <iostream>
#include <algorithm>

using namespace std;

bool arePermutation(string A, string B)
{
    // sorting
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    // comparison
    if (A == B)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string a = "test", b = "tted";
    cout << arePermutation(a, b) << endl;

    return 0;
}