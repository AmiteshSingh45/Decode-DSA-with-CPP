#include <iostream>
#include <vector>
using namespace std;

vector<vector<char>> grid;

bool canplaceQueen(int row, int col, int n)
{
    // COLUMN CHECK
    for (int i = row - 1; i >= 0; i--)
    {
        if (grid[i][col] == 'Q')
            return false; // we are attacked
    }

    // diagnol check

    // left diagnol
    for (int i = row - 1, j = col - 1; i >= 0 and j >= 0; i--, j--)
    {
        if (grid[i][j] == 'Q')
            return false; // we are attacked
    }

    // right diagonal
    for (int i = row - 1, j = col + 1; i >= 0 and j < n; i--, j++)
    {
        if (grid[i][j] == 'Q')
            return false; // we are attacked
    }

    return true; // no attack
}

void f(int row, int n)
{
    if (row == n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << grid[i][j] << " "; // base case
            }
            cout << endl;
        }
        return;
    }

    for (int col = 0; col < n; col++)
    {
        if (canplaceQueen(row, col, n))
        {
            grid[row][col] = 'Q';
            f(row + 1, n);
            grid[row][col] = '.'; // backtracking
        }
    }
}

vector<vector<string>> nqueen(int n)
{
    grid.resize(n, vector<char>(n, '.'));
    f(0, n);
}



int main()
{
    nqueen(4);
}