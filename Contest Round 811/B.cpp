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
    
    ll t, n, foundNum;
    cin >> t;
    for(ll i = 0; i < t; i++) {
        cin >> n;
        vector<ll> nums(n);
        set<ll> repeated;
        foundNum = 0;
        for (ll j = 0; j < n; j++) {
            cin >> nums[j];
        }

        for (ll j = n - 1; j >= 0; j--) {
            if (repeated.find(nums[j]) != repeated.end()) { //elem repetido
                foundNum = j + 1;
                break;
            } else {
                repeated.insert(nums[j]);
            }
        }
        cout << foundNum << "\n";
    }
    return 0; 
} 