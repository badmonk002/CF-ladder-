#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define lld long double
#define ff first
#define ss second
#define fl(i, n) for (int i = 0; i < n; i++)
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
    int arr[5][5];
    int x,y;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {  
            cin >> arr[i][j];
            if(arr[i][j]==1){
                x=i;
                y=j;
            }
        }
    }

    
    cout << abs(3-x) + abs(3-y);
    

    return 0;
}