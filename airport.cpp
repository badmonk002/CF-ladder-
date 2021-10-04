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
    int n, m;
    int min = 0;
    int max = 0;
    int countm = 0;
    int countmX = 0;
    cin >> n >> m;
    int index = 0;
    vector<int> arr{};
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    vector<int> temp = arr;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        sort(arr.begin(), arr.end());
        if (arr[index] > 0)
        {
            min += arr[index];
            arr[index]--;
        }
        else
        {
            index++;
            i--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        sort(temp.begin(), temp.end());
        max += temp[m - 1];
        temp[m - 1]--;
    }
    cout << max << " ";
    cout << min << endl;

    return 0;
}