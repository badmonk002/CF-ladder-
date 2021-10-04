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
    int arr[7];
    int sum = 0;
    cin >> n;
    for (int i = 1; i <= 7; i++)
    {
        int x;
        cin >> x;
        // cout << n << endl;
        arr[i] = x;
        cout << i << " - " << arr[i] << endl;
    }
    cout << n << endl;
    for (int i = 1; i <= n; i++)
    {
        sum += arr[i % 7];
        if (sum >= n)
        {
            cout << i % 7;
            break;
        }
    }
    return 0;
}