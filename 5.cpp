#include <iostream>

using namespace std;

int main()
{
    long long n = 1000000000;

    for(long long i = 2520; i <= n; i += 2520)
    {
        int count = 0;
        for(int j = 11; j <= 20; j++)
        {
            if(i % j == 0)
                count++;
        }

       if(count == 10)
            cout << i  << endl;
    }
}
