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

    ull n;

    cin >> n;
    ull luckyCounter = 0;
    while (n != 0) {
        ull actualNumber = n % 10;
        if (actualNumber == 4 || actualNumber == 7) {
            luckyCounter++; 
        }
        n /= 10;
    }

    if (luckyCounter == 4 || luckyCounter == 7) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0; 
} 