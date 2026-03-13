#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d;
    if (!(cin >> n >> d)) return 0;

    int count = 0;
    long long total = 0;

    for (int i = 0; i < n; i++) {
        vector<int> p(3);
        for (int j = 0; j < 3; j++) {
            cin >> p[j];
        }

        int max_p = *max_element(p.begin(), p.end());
        int min_p = *min_element(p.begin(), p.end());

        if ((max_p - min_p) >= d) {
            count++;
            total += (p[0] + p[1] + p[2]) / 3;
        }
    }

    cout << count << " " << total << endl;
    return 0;
}
