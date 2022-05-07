#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        int n = a.size();
        int count = 0, ans = 0;
        for(int i = 0 ; i < a.size() ; i++)
        {
            if(a[i] != a[0] && a[i] != a[n-1])
                count+=1;
            else
                count = 0;
            ans = max(ans , count);
        }
        if(ans == 0)
            cout<<-1<<endl;
        else
            cout<<ans<<endl;
        
    }
}