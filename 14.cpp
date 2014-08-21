#include <iostream>
using namespace std;

void collatz(int seq[], int index, int n, int len)
{
    if(index > n || index < 0 || seq[index] != 0)
        return;

    if(index == 1)
    {
        seq[index] = 1;
        collatz(seq, 2 * index, n, 2);
    }
    else
    {
        seq[index] = len;
        if(index == 27)
            cout << seq[index] << endl;

        collatz(seq, 2 * index, n, len + 1);
         
        int j = (index - 1) % 3;
        if(j == 0 && index % 2 == 0)
            collatz(seq, (index - 1)/3, n, len + 1);
    }
}

int main()
{   
    int n = 2000000;
    int seq[2000001];

    for(int i = 1; i <= n; i++)
    {
        seq[i] = 0;
    }

    collatz(seq, 1, n, 0);
    int max = 1;
    for(int i = 1; i <= 1000000; i++)
    {
        if(seq[i] == 0)
        {
            long long k = i, count = 0;
            while(k > n || seq[k] == 0)
            {
                if(k % 2 == 0)
                    k = k / 2;
                else
                    k = (3 * k) + 1;

                count++;
            }
            seq[i] = seq[k] + count;    
        }

        if(seq[i] > seq[max])
            max = i;
    }
    cout << max << endl;
}
