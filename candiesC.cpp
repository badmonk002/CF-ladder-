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
    int a, b, c;
    cin >> a >> b >> c;
    int sum = 0;
    int x = a * c / b;
    int y = a * c / b;
    int z = b * c / a;
    sum = sqrt(x) + sqrt(y) + sqrt(z);

    cout << 4 * sum;

    return 0;
}