#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int n,m;
    string s,s1,c;
    cin >>n>>s>>m>>s1>>c;

    for (int i = 0; i < m; i++)
    {
        if (c[i] == 'V')
        {
            s = s1[i] + s;
        }
        else
        {
            s += s1[i];
        }
    }

    cout <<s<<"\n";
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
