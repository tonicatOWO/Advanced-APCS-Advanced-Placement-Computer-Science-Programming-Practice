#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n[3];
    while(cin >> n[0] >> n[1] >> n[2]){
        sort(n, n + 3);
        long long a = n[0], b = n[1], c = n[2];
        cout << a << " " << b << " " << c << "\n";

        long long l = a*a + b*b, r = c*c;
        if(a + b <= c)
            cout << "No\n";
        else if(l < r)
            cout << "Obtuse\n";
        else if(l == r)
            cout << "Right\n";
        else
            cout << "Acute\n";
    }
}
