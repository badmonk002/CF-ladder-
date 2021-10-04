#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define lld long double
#define ff first
#define ss second
#define fl(i, n) for (int i = 0; i < n; i++)
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define flmn(i, m, n) for (int i = n; i > m; i--)
#define fast ios_base::sync_with_stdio(false);
#define input cin.tie(NULL);
#define output cout.tie(NULL);
using namespace std;

//code
//code by Abhishek Awana
//Language c++

int main()
{
    int k;
    cin >> k;
    string str;
    string temp = "";
    map<char, int> mp;
    cin >> str;
    sort(str.begin(), str.end());
    for (int i = 0; i < str.length(); i++)
    {
        mp[str[i]] = mp[str[i]] + 1;
    }
    string var = "";
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        int x = it->second;
        if (x % k != 0)
        {
            cout << -1 << endl;
            return 0;
        }

        int y = x / k;
        while (y--)
        {
            var += it->first;
        }
    }

    while (k--)
    {
        temp = temp + var;
    }
    cout << temp << endl;

    return 0;
}