#include <iostream>
using namespace std;

int main()
{
    //0 = Sunday, 6 = Saturday
    int day = 1, count = 0;
    for(int year = 1900; year <= 2000; year++)
    {
        for(int month = 1; month <= 12; month++)
        {
            if(month == 9 || month == 4 || month == 6 || month == 11)
                day += 30;
            
            else if(month == 2)
            {
                if(year % 4 == 0)
                    day += 29;
                else
                    day += 28;
            }

            else
                day += 31;

            day = day % 7;

            if(day == 0 && !(year == 2000 && month == 12))
                count++;
        }
    }

    cout << count << endl;
}
