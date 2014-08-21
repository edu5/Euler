#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    int b = 2;
    int c = 0;

    int sum = 0;
    while(c <= 4000000)
    {
        if(a % 2 == 0)
            sum += a;

        c = a + b;
        a = b;
        b = c;
        
    }

    if(a % 2 == 0)
        sum += a;


    cout << sum << endl;
    
}
