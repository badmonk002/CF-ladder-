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
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int v = l * k / nl;
    int lime = d * c;
    int salt = p / np;
    int ans;
    int temp;
    temp = min(v, lime);
    ans = min(temp, salt) / n;

    cout << ans << endl;

    return 0;
}



if (it->second % k != 0)
        {
            return -1;
        }
        else
        {
            while (it->second / k--)
            {
                var += it->first;
            }
        }