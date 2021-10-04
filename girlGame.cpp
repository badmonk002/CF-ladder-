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
    string str;
    cin >> str;
    int count = 0;
    int n;
    if (str.length() % 2 == 0)
    {
        n = str.length() / 2;
    }
    else
    {
        n = str.length() / 2 + 1;
    }
    for (int i = 0; i < n; i++)
    {
        if (str[i] != str[str.length() - 1 - i])
        {
            count++;
        }
    }
    if (count % 2 == 0)
    {
        cout << "First" << endl;
    }
    else
    {
        cout << "Second" << endl;
    }

    return 0;
}