#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> b(n);
    
    for (long long i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    sort(b.begin(), b.end());
    
    long long max_diff = b[n-1] - b[0];
    long long ways = 0;
    
    if (max_diff == 0) {
        ways = n * (n - 1) / 2;
    } else {
        long long count_min = 0, count_max = 0;
        
        for (long long i = 0; i < n; i++) {
            if (b[i] == b[0]) count_min++;
            if (b[i] == b[n-1]) count_max++;
        }
        
        ways = count_min * count_max;
    }
    
    cout << max_diff << " " << ways << endl;
    
    return 0;
}
