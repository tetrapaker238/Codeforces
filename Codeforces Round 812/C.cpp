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
        
    ll t, n;

    vector<ll> squares;
    ll i = 0;
    while(i * i <= 100000) {
        squares.push_back(i * i);
        i++;
    }

    squares.push_back(i * i);

    cin >> t;
    for (ll i = 0; i < t; i++) {
        set<ll> nums;
        cin >> n;
        vector<ll> outNums(n);
        for (ll j = 0; j < n; j++) {
            nums.insert(j);
        }

        for (ll j = n - 1; j > 0; j--){
            auto it = lower_bound(squares.begin(), squares.end(), j + n - 1);
            ll resto = (*it) - j;
            if (resto > n - 1) { //cuadrado inalcanzable
                it = prev(it, 1);
                resto = (*it) - j; //Este si debería poderse alcanzar en teoría
                if (nums.find(resto) == nums.end()) { //ya fue utilizado
                    resto = j; //en este caso, el numero j es el cuadrado perfecto
                }
            }

            outNums[j] = resto;
            nums.erase(resto);
        }
        outNums[0] = *(nums.begin());
        nums.erase(nums.begin());
        for (ll j = 0; j < n - 1; j++) {
            cout << outNums[j] << " ";
        }
        cout << outNums[n - 1] << "\n";
    }

    return 0; 
} 