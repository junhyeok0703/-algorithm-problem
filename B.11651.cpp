#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>

using namespace std;
int main(void)
{

    int n, a, b;
    vector<pair<int, int>> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        v.push_back(pair<int, int>(b, a));
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        printf("%d %d", v[i].second,v[i].first);
    }
}