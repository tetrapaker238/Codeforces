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
    cin >> n >> k; // n es la cantidad de tablones, k es el ancho del piano => tenemos que sacar k vallas

    vector<ll> planks(n);

    rep(i, 0, n - 1) {
        cin >> planks[i];
    }

    ll minSum = 100000000, actualSum = 0, ans, j = k - 1, i = 0; 
    //sumamos los primeros k elementos

    for (ll i = 0; i < k; i++) {
        actualSum += planks[i];
    }

    for (;j < n; j++) {
        if (actualSum < minSum) {
            minSum = actualSum;
            ans = i;
        }
        if (j + 1 < n) {
            actualSum = actualSum - planks[i] + planks[j + 1]; 
        }
        i++;
    }

    cout << ans + 1;



    return 0; 
} 