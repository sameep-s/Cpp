#include <iostream>
#include <vector>
using namespace std;

void updateVec(vector<pair<int, int>> v, vector<vector<int>> &arr)
{
    int x, y;
    for (int i = 0; i < v.size(); i++)
    {
        x = v[i].first;
        y = v[i].second;

        // printing- updating
        for (int i = 0; i < arr.size(); i++)
        {
            // rows change
            arr[x][i] = 0;
        }
        for (int i = 0; i < arr[0].size(); i++)
        {
            arr[i][y] = 0;
        }
    }
}

void makeZeroes(vector<vector<int>> &arr)
{
    vector<pair<int, int>> v;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            if (arr[i][j] == 0)
            {
                v.push_back(make_pair(i, j));
            }
        }
    }
    updateVec(v, arr);
}

// to print vector
void printVector(vector<vector<int>> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> arr = {{5, 4, 3, 9}, {2, 0, 7, 6}, {1, 3, 4, 0}, {9, 8, 3, 4}};

    makeZeroes(arr);
    printVector(arr);

    return 0;
}