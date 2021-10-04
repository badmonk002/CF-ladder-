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
int n;
string str;
cin>>str;
n=str.length();
for(int i=0; i<n; i++){
    if(str[i]=='.'){
        cout<<0;
    }
    else if(str[i]=='-' && str[i+1]=='.'){
        cout<<1;
        i++;
    }
    else if(str[i]=='-' && str[i+1]=='-'){
        cout<<2;
        i++;
    }
}
return 0;
}