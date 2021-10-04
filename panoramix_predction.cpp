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

int prime(int n){
    
    for(int i=2; i<n; i++){
        if(n%i==0){
            return 0;
        }
    }
    if(n==1 || n==2){
        return 1;
    }
    else{
        return 1;
    }
}

int main(){
int n,m;
cin>>n>>m;
int count = 0;
int result = prime(m);
if(result==0){
    cout<<"NO";
    return 0;
}
for(int i=n; i<=m; i++){
    int j = prime(i);
    if(j==1){
        count++;
    }
}
if(count==2){
    cout<<"YES";
}
else{
    cout<<"NO";
}

return 0;
}