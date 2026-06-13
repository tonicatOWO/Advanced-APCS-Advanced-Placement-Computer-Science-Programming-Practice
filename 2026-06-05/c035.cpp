#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<string> mat(n);
    for(int i = 0; i < n; i++) cin >> mat[i];

    for(int j = 0; j < m; j++){
        for(int i = 0; i < n; i++)
            cout << mat[i][j];
        cout << "\n";
    }
}
