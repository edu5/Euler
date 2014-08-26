#include <iostream>
using namespace std;

int main()
{
    int sum = 1, curr = 1;
    int n = 1;
    while(curr < 1002001) //1001 * 1001
    {
        
        for(int i = 0; i < 4; i++)
        {
            curr += (2 * n);
            sum += curr;
        }
        n++;
    }
    cout << sum << endl;
}
