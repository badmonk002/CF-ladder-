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
    cin >> n;
    vector<int> arr;
    int c1 = 1;
    int c2 = 1;
    int dif = 0;
    int num = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    if (arr[0] != arr[n - 1])
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                c1++;
            }
            else
            {
                break;
            }
        }
        for (int i = n - 1; i > 0; i--)
        {
            if (arr[i] == arr[i - 1])
            {
                c2++;
            }
            else
            {
                break;
            }
        }
    }
    else
    {
        num = n * (n - 1) / 2;
    }
    dif = arr[n - 1] - arr[0];
    cout << dif << " " << c1 * c2 << endl;
    return 0;
}