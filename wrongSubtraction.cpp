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

    ll n, k;
    cin >> n >> k;

    while (k > 0) {
        if (n % 10 == 0) {
            n /= 10;
        } else {
            n--;
        }
        k--;
    }

    cout << n;

    return 0; 
} 