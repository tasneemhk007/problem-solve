#include<bits/stdc++.h>

using namespace std;
void solve()
{
    int n;
    cin>>n;
    int a[n];
    int pe = 0;
    int niga = 0;
    int opp = 0;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];

    }
    for(int i = 0; i < n; i++)
    {

        if(a[i] == 1)
        {
            pe++;
        }
        else
        {
            niga++;
        }

    }

    while(pe<niga)
    {
        pe++;
        niga--;
        opp++;
    }
    if(niga%2!=0)
    {
        opp++;
    }
    cout<<opp<<"\n";


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
