#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define lld long double
#define ff first
#define ss second
#define fl(i,n) for(int i=0;i<n;i++)
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define flmn(i,m,n) for(int i=n;i>m;i--)
#define fast ios_base::sync_with_stdio(false);
#define input cin.tie(NULL);
#define output cout.tie(NULL);
using namespace std;
 
//code
//code by Abhishek Awana 
//Language c++


int main(){
    string s1,s2;
    string s3;
    getline(cin, s1);
    getline(cin, s2);
    int n = s1.size();
    for(int i=0; i<n; i++){
        s3[i] = s1[i]^s2[i];
    }
    for(int i=0; i<n; i++){
        cout<<s3[i];
    }

return 0;
}