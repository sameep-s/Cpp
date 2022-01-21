#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define M 5

bool isSafe(int i, int j, int n, vector<vector<int>> m, bool visited[][M])
{
    // the condition
    if (i < 0 || i == n || i < 0 || j == n || visited[i][j] || m[i][j] == 0)
    {
        return false;
    }

    return true;
}

// utilityFunction
void printPathUtil(int i, int j, vector<vector<int>> m, int n, vector<string> &possiblePaths, string &path, bool visited[M][M])
{
    // base case
    if (i == n || j == n || i == -1 || j == -1 || visited[i][j] || m[i][j] == 0)
    {
        return;
    }

    if (i == n - 1 && j == n - 1)
    {
        possiblePaths.push_back(path);
        return;
    }

    // rec case
    visited[i][j] == true;

    // down
    if (isSafe(i + 1, j, n, m, visited))
    {
        cout << "D" << endl;

        path.push_back('D');
        printPathUtil(i + 1, j, m, n, possiblePaths, path, visited);
        path.pop_back();
    }

    // left

    if (isSafe(i, j - 1, n, m, visited))
    {
        cout << "L" << endl;

        path.push_back('L');
        printPathUtil(i, j - 1, m, n, possiblePaths, path, visited);
        path.pop_back();
    }
    // right

    if (isSafe(i, j + 1, n, m, visited))
    {
        cout << "R" << endl;

        path.push_back('R');
        printPathUtil(i, j + 1, m, n, possiblePaths, path, visited);
        path.pop_back();
    }
    // up

    if (isSafe(i - 1, j, n, m, visited))
    {
        cout << "U" << endl;

        path.push_back('U');
        printPathUtil(i - 1, j, m, n, possiblePaths, path, visited);
        path.pop_back();
    }

    // backtrack
    visited[i][j] == false;
}

// driver function
void printPath(vector<vector<int>> m)
{
    int n = m.size();

    vector<string> possiblePaths;
    string path;
    bool visited[M][M];

    memset(visited, false, sizeof(visited));

    printPathUtil(0, 0, m, n, possiblePaths, path, visited);

    for (int i = 0; i < possiblePaths.size(); i++)
    {
        cout << possiblePaths[i] << " ";
    }
}

int main()
{

    vector<vector<int>> m = {{1, 0, 0, 0, 0},
                             {1, 1, 1, 1, 1},
                             {1, 1, 1, 0, 1},
                             {0, 0, 0, 0, 1},
                             {0, 0, 0, 0, 1}};

    printPath(m);

    return 0;
}