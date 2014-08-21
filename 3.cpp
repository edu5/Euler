#include <iostream>

using namespace std;

int main()
{
    int max = 2;
    int sqrt = 775146;
    long long num = 600851475143;

    bool arr[sqrt + 1];
    for(int i = 1; i <= sqrt; i++)
    {
        arr[i] = true;
    }

    for(int i = 4; i <= sqrt; i += 2)
    {
        arr[i] = false;
    }

    for(int i = 3; i <= sqrt; i += 2)
    {
        for(int j = 2 * i; j <= sqrt; j += i)
        {
            arr[j] = false;
        }
    }

    for(int i = 2; i <= sqrt; i++)
    {
        if(arr[i] && num % i == 0)
            max = i;
    }

    cout << max << endl;
}
