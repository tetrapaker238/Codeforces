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
    ll sameCounter;
    char lastChar = 'a';
    string s;
    cin >> s;

    for (ll i = 0; i < s.le(); i++) {
        if (lastChar == s[i]) {
            sameCounter++;
            if (sameCounter == 7) {
                cout << "YES";
                return 0;
            }
        } else {
            sameCounter = 1;
            lastChar = s[i];
        }
    }
    cout << "NO";
    return 0; 
} 