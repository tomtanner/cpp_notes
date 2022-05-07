#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   long long int tt;
    cin>>tt;
    while(tt--) {
    long long int n;
    cin>>n;
    if(n%4==0) cout<<n+3<<"\n";
    else if (n%4==1) cout<<n<<"\n";
    else cout<<"3"<<"\n";
   }
}