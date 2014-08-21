#include <iostream>

using namespace std;

int factor_sum(int i)
{
    int j = 2;
    int sum = 1;
    while(j * j < i)
    {
        if(i % j == 0)
        {
            sum += j;
            sum += (i / j);
        }
        j++;
    }
    return sum;
}

int main()
{
    int sum = 0;
    for(int i = 1; i < 10000; i++)
    {
        for(int j = i + 1; j < 10000; j++)
        {
            if(factor_sum(i) == j && factor_sum(j) == i)
            {
                sum += i;
                sum += j;
                cout << i << " " << j << endl;
            }
        }
    }
    cout << sum << endl;
}
