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

    for (ll i = 0; i < t; i++) {
        cin >> n;
        vector<ll> arr(n);
        for (ll j = 0; j < n; j++) {
            cin >> arr[j];
        }

        if (n <= 2) {
            cout << "YES" << "\n";
        } else {
            string res = "YES";
            bool decr = false;
            for (ll j = 1; j < n - 1; j++) {
                if (!decr) {
                    if (arr[j] < arr [j - 1]) {
                        decr = true;
                    }
                }
                if (decr && (arr[j] < arr[j + 1])) {
                    res = "NO";
                    break;
                }
            }
            cout << res << "\n";
        }
    }

    return 0; 
} 