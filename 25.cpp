#include <iostream>

using namespace std;

    

int main()
{
    int a[1000];
    int b[1000];

    for(int i = 0; i < 1000; i++)
    {
        a[i] = 0;
        b[i] = 0;
    }

    a[0] = 1;
    b[0] = 1;

    bool flag = true;
    int fib = 3;
    while(a[999] == 0 && b[999] == 0)
    {
        int carry = 0;
        for(int i = 0; i < 1000; i++)
        {
            int s = a[i] + b[i] + carry;
            carry = s / 10;
            s = s % 10;
            if(flag)
                a[i] = s;
            else
                b[i] = s;
        }
        flag = !flag;
    }

    flag = true;
    for(int i = 0; i < 1000; i++)
    {
        if(flag)
            cout << a[i];
        else
            cout << b[i];
    }
    cout << endl; 
}
