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
    string song;
    cin >> song;
    int n = song.length();
    string temp = "";
    for (int i = 0; i < n - 3; i++)
    {
        if (song[i] != 'W' && song[i + 1] != 'U' && song[i + 2] != 'B')
        {
            temp += song[i + 3];
        }
    }
    cout << temp;

    return 0;
}