#include <iostream>

using namespace std;

bool is_palindrome(int i)
{
    int j = i;
    int k = 0;
    while(j > 0)
    {
        k *= 10;
        k += j % 10;
        j /= 10;
    }

    return i == k;
}

int main()
{  
    int max = 0;
    for(int i = 100; i <= 999; i++)
    {
        for(int j = 100; j <= 999; j++)
        {
            int product = i * j;
            if(is_palindrome(product) && product > max)
            {
                cout << i << " " << j << endl;
                max = i * j;
            }   
        }
    }
    cout << max << endl;
}
