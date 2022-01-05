#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// Sorting function
vector<pair<int, int>> sortCartesian(vector<pair<int, int>> &v)
{
    int n = v.size();

    for (int i = 0; i < n; i++)
    {
        sort(v.begin(), v.end());
    }

    return v;
}

// printFunction
void printCartesianArray(vector<pair<int, int>> v)
{
    int n = v.size();

    for (int x = 0; x < v.size(); x++)
    {
        cout << "( " << v[x].first << " , " << v[x].second << " ) ";
    }
    cout << "\n"
         << endl;
}

int main()
{
    // Cartesian point array
    vector<pair<int, int>> v2 = {{3, 4}, {2, 3}, {3, 7}, {1, 5}, {3, 4}, {274, 99}, {-1, 44}, {222, 87}, {3, 1}};

    // before sorting
    printCartesianArray(v2);

    sortCartesian(v2);

    // after sorting
    printCartesianArray(v2);

    return 0;
}