#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream file;
    file.open("numbers13.txt");

    int numbers[100][50];
    for(int i = 0; i < 100; i++)
    {
        string num;
        getline(file, num);

        for(int j = 0; j < 50; j++)
        {
            numbers[i][j] = num[j] - '0';
        }
    }

   int s[52];
   int carry = 0, k = 51;
   for(int j = 49; j >= 0; j--, k--)
   {
        int sum = carry;
        for(int i = 0; i < 100; i++)
        {
            sum += numbers[i][j];
        }
        
        s[k] = sum % 10;
        carry = sum / 10;
        cout << carry << endl;
   }
   s[k] = carry % 10;
   s[k - 1] = carry / 10;

   k = 0;
   while(s[k] == 0)
      k++;

   for(int i = 0; i < 10; i++, k++)
   {
        cout << s[k];
   }
   cout << endl;


}
