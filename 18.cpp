#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    file.open("numbers18.txt");

    int triangle[15][15];
    for(int i = 0; i < 15; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            file >> triangle[i][j];
        }
    }
    

    for(int i = 13; i >= 0; i--)
    {
        for(int j = 0; j <= i; j++)
        {
            int left = triangle[i][j] + triangle[i + 1][j];
            int right = triangle[i][j] + triangle[i + 1][j + 1];
            triangle[i][j] = max(left, right);
        }
    }

    for(int i = 0; i < 15; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << triangle[i][j] << " ";
        }
        cout << endl;
    }

    cout << triangle[0][0] << endl;
}
