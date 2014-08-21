#include <iostream>

using namespace std;


int main()
{
    long grid[21][21];
    for(int i = 0; i < 21; i++)
    {
        for(int j = 0; j < 21; j++)
        {
            grid[i][j] = 0;
        }
    }

    for(int i = 1; i < 21; i++)
    {
        grid[i][0] = 1;
        grid[0][i] = 1;
    }

    for(int i = 1; i < 21; i++)
    {
        for(int j = 1; j < 21; j++)
        {
            grid[i][j] = grid[i - 1][j] + grid[i][j - 1];
        }
    }

    cout << grid[20][20] << endl;
}
