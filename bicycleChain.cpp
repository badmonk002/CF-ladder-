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
    int arr1[n];
    int count = 0;
    int max = 0;
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    int m;
    cin >> m;
    int arr2[m];

    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr2[j] % arr1[i] == 0)
            {
                temp.push_back(arr2[j] / arr1[i]);
            }
        }
    }

    sort(temp.begin(), temp.end(), greater<int>());

    for (int i = 0; i < temp.size(); i++)
    {
        if (temp[i] == temp[0])
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}