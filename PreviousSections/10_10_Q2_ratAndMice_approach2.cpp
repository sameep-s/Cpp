#include <iostream>
#include <vector>
using namespace std;

// function for printing the vector
void print2DVector(vector<vector<int>> mat)
{
    int x = mat.size();
    int y = mat[1].size();

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void ratAndMice(vector<string> s, vector<vector<int>> v, int i, int j, int n, int m)
{
    // baseCase
    if (i == n && j == m)
    {
        print2DVector(v);
        return;
    }

    // recursiveCase(s)
    // down
    if (i != n && s[i + 1][j] != 'X' && v[i + 1][j] != 1)
    {
        v[i + 1][j] = 1;
        ratAndMice(s, v, i + 1, j, n, m);
        v[i + 1][j] = 0;
    }

    // left
    if (j > 0 && s[i][j - 1] != 'X' && v[i][j - 1] != 1)
    {
        v[i][j - 1] = 1;
        ratAndMice(s, v, i, j - 1, n, m);
        v[i][j - 1] = 0;
    }
    // right
    if (j != m && s[i][j + 1] != 'X' && v[i][j + 1] != 1)
    {
        v[i][j + 1] = 1;
        ratAndMice(s, v, i, j + 1, n, m);
        v[i][j + 1] = 0;
    }

    // up
    if (i > 0 && s[i - 1][j] != 'X' && v[i - 1][j] != 1)
    {
        v[i - 1][j] = 1;
        ratAndMice(s, v, i - 1, j, n, m);
        v[i - 1][j] = 0;
    }

    // end
    return;
}

int main()
{
    vector<string> s = {"OXOO", "OOOX", "XOXO", "XOOX", "XXOO"};

    int n = s.size();
    int m = s[0].size();

    // this creates a (nxm) matrix and fills it with 0's.
    vector<vector<int>> v(n, vector<int>(m, 0));
    v[0][0] = 1;

    ratAndMice(s, v, 0, 0, n - 1, m - 1);

    return 0;
}