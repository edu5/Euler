#include <iostream>

using namespace std;

int main()
{
    int ans[200];

    for(int i = 0; i < 200; i++)
    {
        ans[i] = 0;
    }

    ans[0] = 1;
    for(int i = 2; i <= 100; i++)
    {
        int carry = 0;
        for(int j = 0; j < 200; j++)
        {
            int k = (ans[j] * i) + carry;
            ans[j] = k % 10;
            carry = k / 10;
        }
    }

    int sum = 0;
    for(int i = 0; i < 200; i++)
    {
        sum += ans[i];
    }
    cout << sum << endl;
}
