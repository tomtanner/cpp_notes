#include <iostream>
#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define mod 1e9 + 7

int main(){
ios::sync_with_stdio(0); cin.tie(0);
ll t;
cin>>t;
while(t--){
  ll n;
  cin>>n;

    if(n%7>=6){
        cout<<(n/7)+1<<endl;
    }
    else{
        cout<<n/7<<endl;
    }

}

}