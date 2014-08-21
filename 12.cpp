#include <iostream>

using namespace std;

int triangle(int n)
{
    return (n * (n + 1)) / 2;
}

int main()
{ 
    int n = 2000000;
    bool arr[2000001];

    for(int i = 0; i <= n; i++)
    {
        arr[i] = true;
    }

    for(int i = 2; i <= n; i++)
    {
        for(int j = 2*i; j <= n; j += i)
        {
            arr[j] = false;
        }
    }

    for(int i = 1; i <= n; i++)
    {
        int n = triangle(i);
        int j = 2;
        int d = 1;
        
        do
        {
            int k = 0;
            while(n % j == 0)
            {
                k++;    
                n /= j;

            }
            
            if(k != 0)
                d *= (k + 1);

            j++;
        } while(j <= n);

        if(d > 500)
        {
            cout << triangle(i) << endl;
            return 0;
        }
    }

    
    
}
