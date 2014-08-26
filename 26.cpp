#include <iostream>
#include <string>
using namespace std;

int main()
{
/*    bool s[1001];
    for(int i = 0; i < 1001; i++)
    {
        s[i] = true;
    }

    for(int i = 2; i < 1001; i++)
    {
        for(int j = 2*i; j < 1001; j+=i)
        {
            s[j] = false;
        }
    }

    int max = 0;
    for(int i = 2; i < 1001; i++)
    {
        int n = i;
        float p = i;
        for(int j = 2; j <= i; j++)
        {
            if(i == 7) cout << s[i] << endl;
            if(s[j] && n % j == 0)
            {
                p *= ((float)1 - (float)1/(float)j);
                while(n % j == 0)
                    n /= j;
            }

            if(n == 1)
                break;
        }
        if(p > max)
            max = i;
        if(i == 997)
            cout << p << endl;
    }
    cout << max << endl;
*/

    int max = 0, max_i = 2;
    for(int i = 2; i < 1000; i++)
    {
        int m = 9 * i + 1;
        int* progress = new int[m];
        for(int i = 0; i < m; i++)
        {
            progress[i] = 0;
        }

        int carry = 1;
        int length = 0;
        while(carry != 0)
        {
            if(carry >= i)
            {
                int c = (carry / i);
                c *= i;
                carry -= c;
                if(progress[carry] == 0)
                {
                    length++;
                    progress[carry] = length;
                }
                else
                    break;
            }
            else
            {
                if(length != 0)
                    length++;
            }
            carry *= 10;
        }
        if(carry != 0)
        {
            if(length > max)
            {
                max = length;
                max_i = i;
            }
        }
        else
            length = 0;

        cout << i << " " << length << endl;
    }

    cout << max_i << endl;
}
