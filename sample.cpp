// backtracking (hard)
#include <bits/stdc++.h>
#define MAX 5
using namespace std;

// function to tell if current cell is placable
bool isSafe(int row, int col, int m[][MAX],
            int n, bool visited[][MAX])
{
    if (row < 0 || row == n || col < 0 ||
        col == n || visited[row][col] || m[row][col] == 0)
    {
        return false;
    }

    return true;
}

// utility function
void printPathUtil(int row, int col, int m[][MAX], int n, string &path, vector<string> &possiblePaths, bool visited[][MAX])
{

    if (row == -1 || row == n || col == -1 || col == n || visited[row][col] || m[row][col] == 0)
    {
        return;
    }

    if (row == n - 1 && col == n - 1)
    {
        possiblePaths.push_back(path);
        return;
    }

    visited[row][col] = true;

    if (isSafe(row + 1, col, m, n, visited))
    {
        cout << "D" << endl;

        path.push_back('D');
        printPathUtil(row + 1, col, m, n,
                      path, possiblePaths, visited);
        path.pop_back();
    }

    if (isSafe(row, col - 1, m, n, visited))
    {
        cout << "L" << endl;

        path.push_back('L');
        printPathUtil(row, col - 1, m, n,
                      path, possiblePaths, visited);
        path.pop_back();
    }

    if (isSafe(row, col + 1, m, n, visited))
    {
        cout << "R" << endl;

        path.push_back('R');
        printPathUtil(row, col + 1, m, n,
                      path, possiblePaths, visited);
        path.pop_back();
    }

    if (isSafe(row - 1, col, m, n, visited))
    {
        cout << "U" << endl;

        path.push_back('U');
        printPathUtil(row - 1, col, m, n,
                      path, possiblePaths, visited);
        path.pop_back();
    }

    visited[row][col] = false;
}

// Head function
void printPath(int m[MAX][MAX], int n)
{

    vector<string> possiblePaths;
    string path;
    bool visited[n][MAX];
    memset(visited, false, sizeof(visited));

    printPathUtil(0, 0, m, n, path,
                  possiblePaths, visited);

    // printing once answers are received
    for (int i = 0; i < possiblePaths.size(); i++)
        cout << possiblePaths[i] << " ";
}

// mainFunction
int main()
{
    int m[MAX][MAX] = {{1, 0, 0, 0, 0},
                       {1, 1, 1, 1, 1},
                       {1, 1, 1, 0, 1},
                       {0, 0, 0, 0, 1},
                       {0, 0, 0, 0, 1}};

    int n = sizeof(m) / sizeof(m[0]);
    printPath(m, n);
    cout << "n:  --->  " << n << endl;

    return 0;
}

/**
 *
left: 50%;
transform: translate(-50%, 0px)

 *
 */