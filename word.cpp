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

    string s;
    string upp = "";
    string low = "";
    ll uppCounter = 0, lowCounter = 0;

    cin >> s;

    for (ll i = 0; i < s.length(); i++) {
        if (islower(s[i])) {
            lowCounter++;
        } else {
            uppCounter++;
        }
        upp += toupper(s[i]);
        low += tolower(s[i]);
    }

    if (uppCounter > lowCounter) {
        cout << upp;
    } else {
        cout << low;
    }

    return 0; 
} 