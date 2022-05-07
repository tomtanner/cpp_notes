#include <iostream>
#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define mod 1e9 + 7

int main(){
ios::sync_with_stdio(0); cin.tie(0);
ll test;
cin>>test;
while(test--){
   string s,t;
    string M="";
   cin>>s>>t;
    ll len=s.length();
    for(int i=0;i<len;i++){
        if(s[i]==t[i]){
            M+="G";
        }
        else{
            M+="B";
        }
    }
    cout<<M<<endl;

}

}