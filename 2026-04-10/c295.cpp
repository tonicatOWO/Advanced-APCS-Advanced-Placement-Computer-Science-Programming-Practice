#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> nums(n, vector<int>(m));
	vector<int> chosen(n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> nums[i][j];
		}
		chosen[i] = *max_element(nums[i].begin(), nums[i].end());
	}
	int S = accumulate(chosen.begin(), chosen.end(), 0);
	cout << S << endl;

	vector<int> result;
	for (int i = 0; i < n; i++) {
		if (S % chosen[i] == 0)
			result.push_back(chosen[i]);
	}
	if (result.empty()) {
		cout << -1 << endl;
	} else {
		for (int i = 0; i < result.size(); i++) {
			if (i)
				cout << " ";
			cout << result[i];
		}
		cout << endl;
	}
	return 0;
}
