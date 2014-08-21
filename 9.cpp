#include <iostream>

using namespace std;

int main()
{
    int max = 333;
    for(int i = 1; i < max; i++)
    {
        for(int j = i + 1; j < max; j++)
        {
            int a = j*j - i*i;
            int b = 2 * j * i;
            int c = j*j + i*i;

            if(a + b + c == 1000)
                cout << a * b * c << endl;
        }
    }
}
