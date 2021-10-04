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

    string first;
    string second;
    int sumf = 0;
    int sums = 0;
    int ans = 0;

    cin >> first >> second;
    transform(first.begin(), first.end(), first.begin(), ::tolower);
    transform(second.begin(), second.end(), second.begin(), ::tolower);

    for (int i = 0; i < first.length(); i++)
    {
        if (first[i] > second[i])
        {
            ans = 1;
            break;
        }
        else if (first[i] < second[i])
        {
            ans = -1;
            break;
        }
    }
    cout << ans << endl;

    return 0;
}