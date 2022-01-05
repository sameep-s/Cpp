#include <iostream>
#include <vector>
using namespace std;

void mergeRow(vector<vector<int>> &arr, int i, int cs, int cm, int ce)
{
    vector<int> temp;

    int x = cs;
    int y = cm + 1;
    while (x <= cm && y <= ce)
    {
        if (arr[i][x] < arr[i][y])
        {
            temp.push_back(arr[i][x]);
            x++;
        }
        else
        {
            temp.push_back(arr[i][y]);
            y++;
        }
    }

    while (x <= cm)
    {
        temp.push_back(arr[i][x]);
        x++;
    }

    while (y <= ce)
    {
        temp.push_back(arr[i][y]);
        y++;
    }

    // printing into array
    int k = 0;
    for (int j = cs; j <= ce; j++)
    {
        arr[i][j] = temp[k++];
    }
}

void mergeCol(vector<vector<int>> &arr, int i, int rs, int rm, int re)
{
    vector<int> temp;

    int x = rs;
    int y = rm + 1;

    while (x <= rm && y <= re)
    {
        if (arr[x][i] < arr[y][i])
        {
            temp.push_back(arr[x][i]);
            x++;
        }
        else
        {
            temp.push_back(arr[y][i]);
            y++;
        }
    }

    // push the remaining elements
    while (x <= rm)
    {
        temp.push_back(arr[x][i]);
        x++;
    }

    while (y <= re)
    {
        temp.push_back(arr[y][i]);
        y++;
    }

    // now print into main
    int k = 0;
    for (int j = rs; j <= re; j++)
    {
        arr[j][i] = temp[k++];
    }
}

void merge(vector<vector<int>> &arr, int m, int n, int rs, int rm, int re, int cs, int cm, int ce)
{

    // for sorting rows
    for (int i = rs; i <= re; i++)
    {
        mergeRow(arr, i, cs, cm, ce);
    }

    // for sorting columns
    for (int i = cs; i <= ce; i++)
    {
        mergeCol(arr, i, rs, rm, re);
    }
}

void twoD_Merge(vector<vector<int>> &arr, int m, int n, int rs, int re, int cs, int ce)
{
    // base case
    if (rs >= re && cs >= ce)
    {
        return;
    }

    int rMid = (rs + re) / 2;
    int cMid = (cs + ce) / 2;

    // sorting row
    twoD_Merge(arr, m, n, rs, rMid, cs, ce);
    twoD_Merge(arr, m, n, rMid + 1, re, cs, ce);

    // sorting columns
    twoD_Merge(arr, m, n, rs, re, cs, cMid + 1);
    twoD_Merge(arr, m, n, rs, re, cMid + 1, ce);

    merge(arr, m, n, rs, rMid, re, cs, cMid, ce);
}

void mergeSort(vector<vector<int>> &arr, int m, int n)
{
    twoD_Merge(arr, m, n, 0, m - 1, 0, n - 1);
}

// printing of vector
void printVector(vector<vector<int>> arr, int m, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{

    // 4x4 vector
    vector<vector<int>> arr = {
        {18, 4, 16, 8},
        {23, 13, 20, 11},
        {28, 24, 26, 25},
        {1, 13, 15, 19}};

    // 3x3 vector
    // vector<vector<int>> arr = {{18, 9, 11},
    //                            {1, 4, 15},
    //                            {13, 23, 20}};

    int n = arr.size(), m = arr[0].size();

    printVector(arr, m, n);
    cout << endl;

    mergeSort(arr, m, n);

    printVector(arr, m, n);

    return 0;
}