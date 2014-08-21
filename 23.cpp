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
    if(j * j == i)
        sum += j;

    return sum;
}

int main()
{
    bool abundant[28124];
    bool sum[28124];

    for(int i = 0; i < 28124; i++)
    {
        abundant[i] = false;
        sum[i] = false;
    }

    for(int i = 1; i < 28124; i++)
    {
        if(factor_sum(i) > i)
        {
            abundant[i] = true;
        }
    }

    for(int i = 12; i < 28124; i++)
    {
        for(int j = i; j < 28124; j++)
        {
            int k = i + j;
            if(k > 28123)
                break;
            if(abundant[i] && abundant[j])
                sum[k] = true;
        }
    }

    long long total = 0;
    for(int i = 1; i < 28124; i++)
    {
        if(!sum[i])
            total += i;
    }
    cout << total << endl;
}
