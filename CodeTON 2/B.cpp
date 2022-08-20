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
    
    ll t, n, x, prevValue, value, v, changes = 0;
    cin >> t;
    for (ll i = 0; i < t; i++) {
        cin >> n >> x;
        cin >> prevValue;
        v = prevValue;
        for (ll j = 1; j < n; j++) {
            cin >> value;
            ll resto = v - value;
            if (abs(resto) > x) {
                if (resto < 0) {
                    v = value - x;
                } else {
                    v = x + value;
                }
                resto = v - prevValue;
                if (abs(resto) > x) {
                    changes++;
                    prevValue = value;
                }
            }
        }
        cout << changes << "\n"; 
        changes = 0;
    }

    return 0; 
} 