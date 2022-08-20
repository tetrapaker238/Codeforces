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
    ll n;
    cin >> n;

    vector<vector<ll>> laptop(n, vector<ll>(2));

    rep(i, 0, n - 1) {
        cin >> laptop[i][0]; //precio
        cin >> laptop[i][1]; //calidad
    }   

    sort(laptop.begin(), laptop.end());

    bool exists = false;

    for(ll i = 0;  i < n - 1; i++) {
        if (laptop[i + 1][1] < laptop[i][1]) {
            exists = !exists;
            break;
        }
    }

    if (exists) {
        cout << "Happy Alex";
    } else{
        cout << "Poor Alex";
    }

    return 0; 
} 