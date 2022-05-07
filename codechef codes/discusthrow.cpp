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
    ll a,b,c;
    cin>>a>>b>>c;
    cout<<max(a,max(b,c))<<endl;
    }

}