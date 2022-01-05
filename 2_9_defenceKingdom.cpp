#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// function to find penalty
int defkin(int w, int h, vector<pair<int, int>> &v)
{
    int maxW = INT_MIN, maxH = INT_MIN;
    vector<int> a = {0}, b = {0};

    for (int i = 0; i < v.size(); i++)
    {
        a.push_back(v[i].first);
        b.push_back(v[i].second);
    }

    // pushing limits in vector
    a.push_back(w + 1);
    b.push_back(h + 1);

    // sorting vectors
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    // finding maxH, maxW
    for (int i = 0; i < v.size(); i++)
    {
        maxW = max(maxW, (abs(a[i + 1] - a[i]) - 1));
        maxH = max(maxH, (abs(b[i + 1] - b[i]) - 1));
    }

    return (maxW * maxH);
}

// Function to print Array
printArr(vector<pair<int, int>> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << "( " << v[i].first << ", " << v[i].second << " )";
    }
}

int main()
{
    vector<pair<int, int>> pos = {{3, 8}, {11, 2}, {8, 6}};

    cout << defkin(15, 8, pos) << " penalty blocks. " << endl;

    // printArr(pos);

    return 0;
}