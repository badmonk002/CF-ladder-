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
    double sum = 0;
    cin >> n;
    double arr[n];
    for (int i = 0; i < n; i++)
    {
        double x;
        cin >> x;
        arr[i] = x / 100;
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << (sum / n) * 100;

    return 0;
}