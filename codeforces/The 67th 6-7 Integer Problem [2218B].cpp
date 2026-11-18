#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a[7];
    for(int i = 0; i < 7; i++)
    {
        scanf("%d", &a[i]);
    }

    int sub = 0;

    sort(a, a + 7, greater<int>());

    for(int i = 1; i < 7; i++)
    {
        sub -= a[i];
    }
  int de = sub+a[0];
    printf("%d\n", de);
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        solve();
    }
    return 0;
}
