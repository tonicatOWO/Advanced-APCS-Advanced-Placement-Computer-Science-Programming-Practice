#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    long long best = a[0], cur = a[0];
    for(int i = 1; i < n; i++){
        cur = max((long long)a[i], cur + a[i]);
        best = max(best, cur);
    }
    cout << best << "\n";
}
