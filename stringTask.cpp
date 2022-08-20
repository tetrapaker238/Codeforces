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
    string s, res = "";
    cin >> s;

    rep(i, 0, s.le() - 1) {
        string ss;
        ss.push_back(tolower(s[i]));
        if (regex_search(ss, regex("[aeiouy]"))) {
            continue;
        } else {
            res+= ".";
            res+=ss;
        }
    }
    cout << res;
    return 0; 
} 