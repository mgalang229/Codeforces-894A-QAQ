#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
using namespace std;

typedef tree<int, null_type, 
less<int>, rb_tree_tag, 
tree_order_statistics_node_update> indexed_set;

void decode() {
	string s;
	cin >> s;
	int cnt = 0, n = (int)s.size();
	for(int i = 0; i < n; ++i) {
		if(s[i] != 'Q') continue;
		for(int j = i + 1; j < n; ++j) {
			if(s[j] != 'A') continue;
			for(int k = j + 1; k < n; ++k) {
				if(s[k] == 'Q') cnt++;
			}
		}
	}
	cout << cnt << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	decode();
	return 0;
}
