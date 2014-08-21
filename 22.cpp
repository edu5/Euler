#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

long long compute_score(string s, int pos)
{
    long long score = 0;
    int sum = 0;
    for(int i = 0; i < s.length(); i++)
    {
        sum += (s[i] - 64);
    }
    score = sum * pos;
    return score;
}

int main()
{
    fstream file;
    file.open("names22.txt");
    
    vector<string> names;
    while(!file.eof())
    {
        string s;
        getline(file, s, ',');
        s = s.substr(1, s.length() - 2);
        names.push_back(s);
    }
    sort(names.begin(), names.end()); 
    long long score = 0;
    for(int i = 0; i < names.size(); i++)
    {
        score += compute_score(names[i], i + 1);
        
    }
    cout << score << endl;

}
