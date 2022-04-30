#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define rep(i,a) for(int i=1;i<=a;i++)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    int k = 0;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        int a[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];

        }
        sort(a + 1, a + n + 1);

        cout << a[n] - a[1] << endl;




    }
    return 0;
}