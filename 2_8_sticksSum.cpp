#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int pairSticks(vector<int> a, int d)
{
    // variables
    int pair = 0, diff = 0;
    int n = (a.size() - 1);

    // sort array;
    sort(a.begin(), a.end());

    // loop to iterate
    for (int i = 0; i < (n - 1); i++)
    {
        if (a[i + 1] - a[i] <= d)
        {
            pair++;
            i++;
        }
    }

    return pair;
}

int main()
{
    vector<int> v = {1, 3, 3, 9, 4};

    cout << "Number of pairs are : " << pairSticks(v, 2) << endl;

    return 0;
}