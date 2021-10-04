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
    int sum = 0;
    int count = 0;
    cin >> n;
    while (n--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        sum += x + y + z;
        if (sum >= 2)
        {
            count++;
        }
        sum = 0;
    }
    cout << count << endl;

    return 0;
}