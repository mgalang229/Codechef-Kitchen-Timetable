#include <bits/stdc++.h>

#define ll long long

using namespace std;

void decode() {
	int n, x;
	cin >> n;
	vector<int> a, b;
	for(int i = 0; i < n; ++i) {
		cin >> x;
		a.push_back(x);
	}
	for(int i = 0; i < n; ++i) {
		cin >> x;
		b.push_back(x);
	}
	int cnt = 0;
	for(int i = 0; i < n; ++i) {
		if(i == 0) {
			if(a[i] >= b[i]) cnt++;
		}
		else if(a[i] - a[i-1] >= b[i]) {
			cnt++;
		}
	}
	cout << cnt << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
	return 0;
}
