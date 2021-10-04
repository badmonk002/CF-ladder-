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
void sortString(string &str)
{
    sort(str.begin(), str.end());
}

int main()
{
    string a1;
    string a2;
    string a3;
    string temp;
    cin >> a1 >> a2 >> a3;
    temp = a1 + a2;
    sortString(temp);
    sortString(a3);
    if (a3 == temp)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}