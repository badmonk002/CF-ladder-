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

int ap(vector<int> vec)
{
    sort(vec.begin(), vec.end());
    int d = vec[1] - vec[0];
    for (int i = 0; i < vec.size() - 1; i++)
    {
        if (vec[i + 1] - vec[i] != d)
        {
            return false;
        }
    }
    return true;
}

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
        mp[vec[i]].push_back(i + 1);
    }
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second.size() == 1)
        {
            count++;
            s[it->first] = 0;
        }
        else
        {
            if (ap(it->second) == true)
            {
                count++;
                s[it->first] = it->second[1] - it->second[0];
            }
        }
    }
    cout << count << endl;
    for (auto t = s.begin(); t != s.end(); t++)
    {
        cout << t->first << " " << t->second << endl;
    }

    return 0;
}