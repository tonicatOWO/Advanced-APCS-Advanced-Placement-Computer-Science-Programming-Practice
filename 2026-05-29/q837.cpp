#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int m, n, k;
  cin >> m >> n >> k;

  vector<string> roulettes(m);
  for (int i = 0; i < m; i++)
    cin >> roulettes[i];

  vector<int> starts(m, 0);
  int score = 0;

  for (int i = 0; i < k; i++) {
    for (int j = 0; j < m; j++) {
      int step;
      cin >> step;
      if (step > 0) {
        starts[j] += n - step % n;
      } else if (step < 0) {
        starts[j] += (-step) % n;
      }
    }

    for (int j = 0; j < n; j++) {
      int cnt[26] = {};
      for (int t = 0; t < m; t++) {
        char c = roulettes[t][(j + starts[t]) % n];
        cnt[c - 'a']++;
      }
      score += *max_element(cnt, cnt + 26);
    }
  }

  cout << score << '\n';
  return 0;
}
