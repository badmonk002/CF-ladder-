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

    long long int n;
    cin >> n;
    int temp;
    long long int sum1 = 0;
    long long int sum2 = 0;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> temp;
        arr[temp] = i;
    }
    long long int m;
    cin >> m;
    while (m--)
    {
        int x;
        cin >> x;
        sum1 += arr[x];
        sum2 += n - arr[x] + 1;
    }
    cout << sum1 << " " << sum2 << endl;

    return 0;
}