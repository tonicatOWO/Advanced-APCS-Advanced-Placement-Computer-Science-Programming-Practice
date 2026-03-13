#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main(){
        int n;
        cin >> n;

        vector<pair<int, int>> p(n);
        for (int i=0; i<n; i++) {
                cin >> p[i].first >> p[i].second;
        }
        int mn = 400 ,mx =0;
        for (int i = 1; i < n; i++) {
                int x1 = p[i].first, y1 = p[i].second;
                int x2 = p[i-1].first, y2 = p[i-1].second;
                int dis = abs(x1 - x2) + abs(y1 - y2);
                mn = min(mn, dis);
                mx = max(mx, dis);
        }
        cout << mx << " " << mn << endl;
}
