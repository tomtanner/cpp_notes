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
    ll N,X;
    cin>>N>>X;
    ll a=0,b=0,c=0;
    
    if(X%3==0){
        a+=(X/3);
    }
    else if(X%3==1){
        a+=(X/3)+1;
        b+=2;
    }
    else if(X%3==2){
        a+=X/3+1;
        b+=1;
    }

    if(a+b<=N){
        cout<<"YES"<<endl;
        cout<<a<<" "<<b<<" "<<N-a-b<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
}

}