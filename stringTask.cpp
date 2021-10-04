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
    int s, n;
    cin >> s >> n;
    int pow[n];
    int bonus[n];
    vector<pair<int, int>> vec;
    for (int i = 0; i < n; i++)
    {
        cin >> pow[i];
        cin >> bonus[i];
        vec.push_back(make_pair(pow[i], bonus[i]));
    }
    sort(vec.begin(), vec.end());
    for (int i = 0; i < n; i++)
    {
        if (s > vec[i].first)
        {
            s += vec[i].second;
        }
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

    return 0;
}