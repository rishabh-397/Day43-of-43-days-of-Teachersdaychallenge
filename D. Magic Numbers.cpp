#include <iostream>
#include <string>
#include <vector>
#include <cstring>
using namespace std;

const int MOD = 1e9 + 7;
int m, d;
string a, b;
int dp[2005][2005][2][2];

int solve(string &s, int pos, int rem, int tight, int started) {
    if (pos == s.length()) {
        return (rem == 0 && started) ? 1 : 0;
    }
    
    if (dp[pos][rem][tight][started] != -1) {
        return dp[pos][rem][tight][started];
    }
    
    int limit = tight ? s[pos] - '0' : 9;
    int res = 0;
    
    for (int digit = 0; digit <= limit; digit++) {
        int new_tight = tight && (digit == limit);
        int new_started = started || (digit != 0);
        
        if (pos % 2 == 1) {
            if (digit != d) continue;
        } else {
            if (digit == d) continue;
        }
        
        int new_rem = (rem * 10 + digit) % m;
        res = (res + solve(s, pos + 1, new_rem, new_tight, new_started)) % MOD;
    }
    
    return dp[pos][rem][tight][started] = res;
}

int main() {
    cin >> m >> d;
    cin >> a >> b;
    
    memset(dp, -1, sizeof(dp));
    int upper = solve(b, 0, 0, 1, 0);
    
    memset(dp, -1, sizeof(dp));
    int lower = solve(a, 0, 0, 1, 0);
    
    int ans = (upper - lower + MOD) % MOD;
    
    bool valid_a = true;
    int rem = 0;
    for (int i = 0; i < a.length(); i++) {
        if (i % 2 == 1) {
            if (a[i] - '0' != d) {
                valid_a = false;
                break;
            }
        } else {
            if (a[i] - '0' == d) {
                valid_a = false;
                break;
            }
        }
        rem = (rem * 10 + (a[i] - '0')) % m;
    }
    
    if (valid_a && rem == 0) {
        ans = (ans + 1) % MOD;
    }
    
    cout << ans << endl;
    
    return 0;
}
