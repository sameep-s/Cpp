#include <iostream>
using namespace std;

// print the board
void printBoard(int n, int board[][20])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

// to verify can place
bool canPlace(int board[][20], int x, int y, int n)
{
    // check upwards
    for (int k = 0; k < n; k++)
    {
        if (board[k][y] == 1)
        {
            return false;
        }
    }

    // check left diagonal
    int i = x, j = y;
    while (i >= 0 && j >= 0)
    {
        if (board[i][j] == 1)
        {
            return false;
        }
        i--;
        j--;
    }

    // check right diagonal

    i = x, j = y;
    while (i >= 0 && j < n)
    {
        if (board[i][j] == 1)
        {
            return false;
        }
        i--;
        j++;
    }

    return true;
}

bool solveNQueen(int n, int board[][20], int i)
{
    // base case
    if (i == n)
    {
        // Print the board
        printBoard(n, board);
        return true;
    }

    // recursive case
    // trying to place a queen in every row
    for (int j = 0; j < n; j++)
    {
        if (canPlace(board, i, j, n))
        {
            board[i][j] = 1;
            bool success = solveNQueen(n, board, i + 1);
            if (success)
            {
                return true;
            }
            // backtrack
            board[i][j] = 0;
        }
    }

    return false;
}

int main()
{
    int board[20][20] = {0};
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    solveNQueen(n, board, 0);

    return 0;
}
