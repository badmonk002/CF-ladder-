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

string boyAndGirl(int n, int t, string str)
{
    while (t--)
    {
        for (int i = 0; i < n ; i++)
        {
            if (str[i] == 'B' && str[i + 1] == 'G')
            {
                str[i] = 'G';
                str[i + 1] = 'B';
                i++;
            }
        }
    }
    return str;
}

int main()
{
    int n, t;
    cin >> n >> t;
    string str;
    cin >> str;
    cout << boyAndGirl(n, t, str);

    return 0;
}