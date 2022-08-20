#include <bits/stdc++.h> 
using namespace std; 
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define ll long long 
#define ld long double 
#define ull unsigned long long
#define le length
#define rep(i , j , n) for(ll i = j ; i <= n ; i++) 
#define per(i , j , n) for(ll i = j ; i >= n ; i--)  

int main() { 
    SPEED; 
    cout.precision(8); 
    cout << fixed;
    ll t, n, m;
    string sn, sm;
    cin >> t;
    for (ll i = 0; i < t; i++) {
        cin >> n >> m;
        cin >> sn;
        cin >> sm;

        char vtm = sm[0];
        while (sn.length() > sm.length() && sn.length() >= 2) {
            if (vtm == '0') {
                sn[1] = min(sn[0], sn[1]);
            } else {
                sn[1] = max(sn[0], sn[1]);
            }
            sn.erase(0, 1);
        }

        if (sn == sm) {
            cout << "YES" << "\n";
        } else {
        cout << "NO" << "\n";
        }
    }
    return 0; 
} 