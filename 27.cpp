#include <iostream>
using namespace std;

int main()
{
    int limit = 87320;
    bool s[87320];
    for(int i = 0; i < 87320; i++)
        s[i] = true;

    s[0] = false;
    s[1] = false;
    for(int i = 2; i < 87320; i++)
    {
        for(int j = 2 * i; j < 87320; j += i)
        {
            s[j] = false;
        }
    }

    int c_a = 0, c_b = 0, max = 0;
    for(int a = -999; a < 1000; a++)
    {
        for(int b = 1; b < 1000; b++) //b should be prime, so no negatives
        {
            if(!s[b])
                continue;
            else
            {
                int n = 0;
                int product = n * n + a * n + b;
                while(s[product])
                {
                    n++;
                    product = n * n + a * n + b;
                }
                if(n > max)
                {
                    max = n;
                    c_a = a;
                    c_b = b;
                }

            }
                
        }
    }

    cout << c_a * c_b << endl;

}
