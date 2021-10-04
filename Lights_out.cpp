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
int arr[3][3];
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        cin>>arr[i][j];
        if(arr[i][j]%2==0){
            arr[i][j]=0;
        }
        else{
            arr[i][j]=1;
        }
    }
}

// adding side points and finding their sum 
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        if(i=0){
            arr[i][j]= arr[i][j]+arr[i+1][j] +
        }
    }
}


for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

return 0;
}