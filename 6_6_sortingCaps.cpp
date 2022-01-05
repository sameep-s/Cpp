#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;

// distance from origin
float dist(pair<int, int> x)
{
    return sqrt(pow(x.first, 2) + pow(x.second, 2));
}

// comparator
bool comp(pair<int, int> arr1, pair<int, int> arr2)
{
    float dist1, dist2;

    dist1 = dist(arr1);
    dist2 = dist(arr2);

    return dist1 < dist2;
}

// sorting array
void sortXY(vector<pair<int, int>> &arr)
{
    sort(arr.begin(), arr.end(), comp);
}

// printing array
void printXY(vector<pair<int, int>> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << "{" << arr[i].first << ", " << arr[i].second << "} ";
    }
}

int main()
{
    vector<pair<int, int>> arr = {{2, 3}, {1, 2}, {3, 4}, {2, 4}, {1, 4}};

    sortXY(arr);
    printXY(arr);

    return 0;
}