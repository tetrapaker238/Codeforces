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
    
    ll t, n, boxX, boxY;
    cin >> t;
    for (ll i = 0; i < t; i++) {
        cin >> n;
        ll maxbu = 0, maxbd = 0, maxbl = 0, maxbr = 0;
        for (ll j = 0; j < n; j++) {
            cin >> boxX >> boxY;
            if (boxX == 0) {
                if (boxY > 0) {
                    maxbu = max(boxY, maxbu);
                } else {
                    maxbd = min(boxY, maxbd);
                }
            } else {
                if (boxX > 0) {
                    maxbr = max(boxX, maxbr);
                } else {
                    maxbl = min(boxX, maxbl);
                }
            }
        }
        cout << 2 *(maxbu - maxbd + maxbr - maxbl) << "\n";
    }

    return 0; 
} 