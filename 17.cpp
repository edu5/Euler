#include <iostream>
using namespace std;

int main()
{
    int counts[1000];
    for(int i = 0; i < 1001; i++)
    {
        counts[i] = 0;
    }
    
    counts[1] = 3;
    counts[2] = 3;
    counts[3] = 5;
    counts[4] = 4;
    counts[5] = 4;
    counts[6] = 3;
    counts[7] = 5;
    counts[8] = 5;
    counts[9] = 4;
    counts[10] = 3;
    counts[11] = 6;
    counts[12] = 6;
    counts[13] = 8;
    counts[14] = 8;
    counts[15] = 7;
    counts[16] = 7;
    counts[17] = 9;
    counts[18] = 8;
    counts[19] = 8;
    counts[20] = 6;
    counts[30] = 6;
    counts[40] = 5;
    counts[50] = 5;
    counts[60] = 5;
    counts[70] = 7;
    counts[80] = 6;
    counts[90] = 6;
    
    

    for(int i = 21; i < 100; i++)
    {
        if(counts[i] == 0)
        {
            int j = i / 10 * 10;
            int k = i % 10;
            counts[i] = counts[j] + counts[k];
        }
    }

    int sum = 0;
    for(int i = 1; i <= 1000; i++)
    {
        sum += counts[i];
    }
    cout << sum << endl;
    for(int i = 100; i < 1000; i++)
    {
        if(counts[i] == 0)
        {
            int j = i / 100;
            int k = i % 100;
            counts[i] = counts[j] + 10 + counts[k];
            if(k == 0)
                counts[i] -= 3;
        }
    }

    counts[1000] = 11;
    sum = 0;
    for(int i = 1; i <= 1000; i++)
    {
        sum += counts[i];
    }
    cout << sum << endl;
}
