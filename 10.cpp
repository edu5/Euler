#include <iostream>

using namespace std;

int main()
{
    int num = 2000000;
    int a[2000001];
    for(int i = 1; i < num; i++)
    {
        if(i % 2 == 1 || i == 2)
            a[i] = true;
        else
            a[i] = false;
    }

    for(int i = 3; i < num; i+=2)
    {
        for(int j = 2 * i; j < num; j+=i)
        {
            a[j] = false;
        }
    }
    

    long long sum = 0;
    for(int i = 2; i <= num; i++)
    {
        if(a[i])
            sum += i;
    }
    cout << sum << endl;
}
