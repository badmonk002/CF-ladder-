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
    int n;
    cin >> n;
    vector<int> vec;
    map<int, vector<int>> mp;
    map<int, int> s;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        mp[vec[i]].push_back(i);
    }
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second.size() == 1)
        {
            s[it->first] = 0;
        }
        if (it->second.size() == 2)
        {
            s[it->first] = it->second[1] - it->second[0];
        }
        else
        {
            for (int i = 1; i < it->second.size(); i++)
            {
                int dif = it->second[1] - it->second[0];

                if (it->second[i] - it->second[i - 1] == dif)
                {
                    count++;
                }
                if (count == it->second.size())
                {
                    s[it->first] = dif;
                }
            }
        }
    }
    cout << s.size() << endl;
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}