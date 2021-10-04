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
    int k;
    cin >> k;
    int sum = 0;
    int count = 0;
    int t = k;
    vector<int> vec;
    for (int i = 0; i < 12; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    sort(vec.begin(), vec.end(), greater<int>());
    for (int i = 0; i < 12; i++)
    {
        if (sum >= k)
        {
            break;
        }
        sum += vec[i];
        count++;
    }
    if (sum >= k)
    {
        cout << count << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}