#include <iostream>
using namespace std;

int main() {
  long long N;
  cin >> N;

  long long n = 1;
  while (2 * n * (n + 1) < N) {
    n++;
  }

  long long prev = 2 * (n - 1) * n;
  long long pos = N - prev;

  if (pos <= n)
    cout << "Pen" << endl;
  else if (pos <= 2 * n)
    cout << "Pineapple" << endl;
  else if (pos <= 3 * n)
    cout << "Apple" << endl;
  else
    cout << "Pineapple pen" << endl;

  return 0;
}
