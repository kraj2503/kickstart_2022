#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pii pair<int, int>
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    for (int j = 1; j <= t; j++)
    {
        ll n, m;
        cin >> n >> m;
        ll c[n];
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
            sum += c[i];
        }

        sum -= (sum / m) * m;
        cout << "Case #" << j << ": " << sum << endl;
    }
    return 0;
}