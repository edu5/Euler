#include <iostream>
#include <queue>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string str = "0123456789";
    queue<string> q; 
    vector<string> list;
    q.push("+" + str);
    while(!q.empty()) 
    { 
        string curr = q.front(); 
        q.pop(); 
        if(curr[curr.length() - 1] == '+') 
        {
            list.push_back(curr);
        } 
        else 
        { 
            int plus = curr.find('+'); 
            for(int i = plus + 1; i < curr.length(); i++) 
            { 
                string left = curr.substr(0, plus); 
                left += curr[i]; 
                string mid = curr.substr(plus, i - plus); 
                string right = curr.substr(i + 1, curr.length() - (i - plus - 1)); 
                string total = left + mid + right; q.push(total);
            } 
        } 
    }

    sort(list.begin(), list.end());
    cout << list[999999] << endl;
}

