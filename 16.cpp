#include <iostream>
using namespace std;

int main()
{
    int ans[1000];
    for(int i = 0; i < 1000; i++)
    {
        ans[i] = 0;
    }

    ans[0] = 1;
    for(int i = 0; i < 1000; i++)
    {
        int carry = 0;
        for(int j = 0; j < 1000; j++)
        {
            int n = (ans[j] * 2) + carry;
            ans[j] = n % 10;
            carry = n / 10;
        }
    }

    int sum = 0;
    for(int i = 0; i < 1000; i++)
    {
        sum += ans[i];
    }
    cout << sum << endl;
}
