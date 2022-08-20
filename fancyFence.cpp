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
        
    ll t, a ,bl;
    ld bd;
    cin >> t;

    rep(i, 1, t) {
        //resolver cada caso
        cin >> a;
        bd = 360./(180. - a);
        bl = (ll)bd;
        if (bd == bl) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }


    }

    return 0; 
} 