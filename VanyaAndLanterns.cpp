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
    cout.precision(10); 
    cout << fixed;
    ll n, l;
    cin >> n >> l;

    vector<ll> lanterns(n);

    for (ll i = 0; i < n; i++) {
        cin >> lanterns[i];
    }

    sort(lanterns.begin(), lanterns.end());
    

    ll longestRoad = 0;
    //procesamos caso i = 0 y le final aparte
    longestRoad= max(2 * lanterns[0],  longestRoad);

    for (ll i = 0; i < n - 1; i++) {
        longestRoad = max(lanterns[i + 1] - lanterns[i], longestRoad);
    }
    longestRoad = max(2 * (l - lanterns[n - 1]), longestRoad);

    cout << longestRoad/2.;

    return 0; 
} 