#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream file;
    file.open("numbers11.txt");

    int i = 0, j = 0, n;
    int nums[20][20];
    while(file >> n)
    {
        nums[i][j] = n;
        j++;
        if(j == 20)
        {
            i++;
            j = 0;
        }
    }

    long long max = 0;

    //check horizontals
    for(int i = 0; i < 20; i++)
    {
        for(int j = 0; j < 16; j++)
        {
            long long curr = 1;
            for(int k = 0; k < 4; k++)
            {
                curr *= nums[i][j + k];
            }
            if(curr > max)
                max = curr;
        }
    }

    //check verticals
    for(int i = 0; i < 16; i++)
    {
        for(int j = 0; j < 20; j++)
        {
            long long curr = 1;
            for(int k = 0; k < 4; k++)
            {
                curr *= nums[i + k][j];
            }
            if(curr > max)
                max = curr;
        }
    }

    //check right diagonals
    for(int i = 0; i < 16; i++)
    {
        for(int j = 0; j < 16; j++)
        {
            long long curr = 1;
            for(int k = 0; k < 4; k++)
            {
                curr *= nums[i + k][j + k];
            }
            if(curr > max)
                max = curr;
        }
    }

    //check left diagonals
    for(int i = 0; i < 16; i++)
    {
        for(int j = 4; j < 20; j++)
        {
            long long curr = 1;
            for(int k = 0; k < 4; k++)
            {
                curr *= nums[i + k][j - k];
            }
            if(curr > max)
                max = curr;
        }
    }

    cout << max << endl;
}
