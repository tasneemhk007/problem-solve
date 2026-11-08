#include <bits/stdc++.h>

using namespace std;

void solve()
{

    int n;
    cin>>n;
    char a[n];
    int ans = 1,coun = 1;

    for(int i = 0; i< n; i++)
    {
        cin>>a[i];
    }
    for(int i = 1; i< n; i++)
    {
        if(a[i]!=a[i-1])
        {
            coun =1;
        }
        else
        {
            coun++;
        }
        ans = max(coun,ans);
    }
    cout<<ans+1<<endl;


}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }


    return 0;
}
