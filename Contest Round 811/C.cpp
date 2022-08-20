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
    
    ll t, s, mv = 9, pastSum = 0, solved = false;
    string sol = "";
    cin >> t;

    for (ll i = 0; i < t; i++) {
        cin >> s;
        if (s < 10) {
            cout << s << "\n";
        } else {
            sol += to_string(mv);
            pastSum += mv;
            while(!solved) {
                for (ll j = 1; j < mv; j++) {
                    if (j + pastSum == s) {
                        solved = !solved;
                        sol += to_string(j);
                        break;
                    }
                }
                if (!solved) {
                    mv -= 1;
                    sol += to_string(mv);
                    pastSum += mv;
                }
            }
            reverse(sol.begin(), sol.end());
            cout << sol << "\n";
            sol = "";
            mv = 9;
            pastSum = 0;
            solved = false;
        } 
    }
    return 0;
}