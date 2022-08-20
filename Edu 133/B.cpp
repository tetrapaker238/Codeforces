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
    
    ll t, n;

    cin >> t;

    rep(i, 0, t - 1) {
        cin >> n;
        vector<ll> perm(n);
        cout << n << "\n";

        rep(j, 0, n - 1) {
            perm[j] = j + 1;
        }

        rep(j, 0, n - 1) {
            rep(k, 0, n - 2) {
                cout << perm[k] << " ";
            }
            cout << perm[n - 1] << "\n";
            ll temp;
            if (j != n - 1) {
                temp = perm[j];
                perm[j] = perm[j + 1];
                perm[j + 1] = temp;
            }
        }

    }

    return 0; 
} 