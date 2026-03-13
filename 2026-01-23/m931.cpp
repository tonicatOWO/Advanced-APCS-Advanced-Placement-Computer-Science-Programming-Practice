#include <algorithm>
#include <iostream>
#include <tuple>
#include <utility>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<pair<int, int>> roles(n);

	for (int i = 0; i < n; i++) {
		cin >> roles[i].first >> roles[i].second;
	}

	vector<tuple<int, int, int>> abilities;
	for (int i = 0; i < n; i++) {
		int atk = roles[i].first;
		int def = roles[i].second;
		int ability = atk * atk + def * def;
		abilities.push_back(make_tuple(ability, atk, def));
	}

	sort(abilities.begin(), abilities.end());

	cout << get<1>(abilities[n - 2]) << " " << get<2>(abilities[n - 2])
	     << endl;

	return 0;
}
