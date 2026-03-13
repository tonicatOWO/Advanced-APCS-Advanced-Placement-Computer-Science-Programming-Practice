#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int H, W, N;
	cin >> H >> W >> N;

	vector<vector<int>> canvas(H, vector<int>(W, 0));

	for (int i = 0; i < N; i++) {
		int r, c, t, x;
		cin >> r >> c >> t >> x;

		for (int row = 0; row < H; row++) {
			for (int col = 0; col < W; col++) {
				if (abs(row - r) + abs(col - c) <= t) {
					canvas[row][col] += x;
				}
			}
		}
	}

	for (int row = 0; row < H; row++) {
		for (int col = 0; col < W; col++) {
			cout << canvas[row][col];
			if (col < W - 1)
				cout << ' ';
		}
		cout << '\n';
	}

	return 0;
}
