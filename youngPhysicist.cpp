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
    ll n, x, y, z, xSum = 0, ySum = 0, zSum = 0;
    cin >> n;

    rep(i, 0, n - 1) {
        cin >> x >> y >> z;
        xSum += x;
        ySum += y;
        zSum += z;

    }

    if (xSum == 0 && ySum == 0 && zSum == 0){
        cout << "YES";
    } else {
        cout << "NO";
    }


    return 0; 
} 