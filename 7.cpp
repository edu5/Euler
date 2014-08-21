#include <iostream>

using namespace std;

int main()
{
    int n = 1000000;
    bool primes[1000001];
    for(int i = 1; i <= n; i++)
    {
        primes[i] = true;
    }

    for(int i = 4; i <= n; i+=2)
        primes[i] = false;
    
    for(int i = 3; i <= n; i+=2)
    {
        for(int j = 2 * i; j <= n; j+= i)
        {
            primes[j] = false;
        }
    }

    int count = 0, j = 2;
    while(j < n && count < 10001)
    {
        if(primes[j])
            count++;
        if(count == 10001)
            break;

        j++;
    }
    cout << j << endl;
}
