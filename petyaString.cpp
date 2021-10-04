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
    string first;
    string second;
    int sumf = 0;
    int sums = 0;

    cin >> first >> second;
    transform(first.begin(), first.end(), first.begin(), ::tolower);
    transform(second.begin(), second.end(), second.begin(), ::tolower);

    for (int i = 0; i < first.length(); i++)
    {
        sumf += first[i] + '0' - '0';
    }
    for (int i = 0; i < second.length(); i++)
    {
        sums += second[i] + '0' - '0';
    }
    if (sumf == sums)
    {
        cout << "0" << endl;
    }
    if (sumf > sums)
    {
        cout << "1" << endl;
    }
    else if (sumf < sums)
    {
        cout << "-1" << endl;
    }

    return 0;
}