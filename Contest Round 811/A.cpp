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
    ll t, n, H, M, hi, mi, minM = 60, minH = 24, actH, actM;
    cin >> t;
    for (ll i = 0; i < t; i++) {
        cin >> n >> H >> M;
        for (ll j = 0; j < n; j++) {
            cin >> hi >> mi;
            if (hi < H || (hi == H && mi < M)) { //nos dimos la vuelta
                actH = 24 - H + hi;
            } else { // hi >= H. Pasamos a hora y minutos la diferencia
                actH = hi - H;
            }

            if (mi >= M) {
                actM = mi - M;
            } else {
                actM = 60 - M + mi;
                actH -= 1;
            }

            if (actH < minH || (actH == minH && actM <= minM)) {
                minH = actH;
                minM = actM;
            }

        }
        cout << minH << " " << minM << "\n";
        minH = 24;
        minM = 60;
    }   

 
    return 0; 
} 