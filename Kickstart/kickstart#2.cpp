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
        string kingdom;
        cin >> kingdom;
        char a = kingdom.back();
        a = tolower(a);
        // cout << a << endl;

        if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
            cout << "Case #" << j << ": " << kingdom << " is ruled by "
                 << "Alice"
                 << ".\n";

        else if (a != 'y')
            cout
                << "Case #" << j<< ": " << kingdom << " is ruled by "
                << "Bob"
                << ".\n";
        else
            cout << "Case #" << j << ": " << kingdom << " is ruled by "
                 << "nobody"
                 << ".\n";
    }
    return 0;
}