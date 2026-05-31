#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, resault = 0;
  cin >> n;
  vector<int> vec(n);
  for (auto &x : vec)
    cin >> x;
  for (auto &x : vec) {
    if (x <= 10)
      resault += 1;
  }
  cout << resault << endl;
  return 0;
}
