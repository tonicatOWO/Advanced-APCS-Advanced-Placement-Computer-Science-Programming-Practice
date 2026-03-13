#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool checkA(const vector<int> &a, const vector<int> &b) {
	bool ok = true;
	if (a[1] == a[3])
		ok = false;
	if (a[1] != a[5])
		ok = false;
	if (b[1] == b[3])
		ok = false;
	if (b[1] != b[5])
		ok = false;
	return ok;
}

bool checkB(const vector<int> &a, const vector<int> &b) {
	return a[6] == 1 && b[6] == 0;
}

bool checkC(const vector<int> &a, const vector<int> &b) {
	return (a[1] != b[1]) && (a[3] != b[3]) && (a[5] != b[5]);
}

int main() {
	int n;
	cin >> n;
	for (int t = 0; t < n; ++t) {
		vector<int> a(7), b(7);
		for (int i = 0; i < 7; ++i)
			cin >> a[i];
		for (int i = 0; i < 7; ++i)
			cin >> b[i];
		string res = "";
		if (!checkA(a, b))
			res += "A";
		if (!checkB(a, b))
			res += "B";
		if (!checkC(a, b))
			res += "C";
		if (res.empty())
			res = "None";
		cout << res << endl;
	}
	return 0;
}
