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

    ll k, n, w;

    cin >> k >> n >> w;

    ll totalCost = k * (w * (w + 1))/2;
    ll ans = totalCost - n;
    if (ans > 0) {
        cout << ans;
    } else {
        cout << 0;
    }

    return 0; 
} 