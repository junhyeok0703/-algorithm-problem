#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
string reversewords(string s)
{
    int start = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            reverse(s.begin() + start, s.begin() + i);
            start = i + 1;
        }
    }
    reverse(s.begin() + start, s.end());
    return s;
}

int main(void)
{
    
    int n;
    cin >> n;
    cin.ignore();
    vector<string> strings(n);
    for (int i = 0; i < n; i++)
    {
        getline(cin, strings[i]);
    }
    for (int i = 0; i < n; i++)
    {

        string output_str = reversewords(strings[i]);
        cout << output_str << endl;
    }
 
}