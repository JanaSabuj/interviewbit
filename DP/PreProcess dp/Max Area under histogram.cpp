/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/
#include <bits/stdc++.h>
using namespace std;

#define int long long int

int maxArea(const vector<int>& hist, int n) {
	// 6 2 5 4 5 1 6
	stack<int> s;
	int ans = 0; // max Area

	int i = 0;
	while (i < n)
	{ // imp while loop
		/* code */
		if (s.empty() or hist[s.top()] <= hist[i]) {
			// if empty or the stack top has a smaller height, just push
			s.push(i++);// 6
		} else {
			int tp = s.top();
			s.pop();

			int tempArea = hist[tp] * (s.empty() ? i : (i - s.top() - 1));
			ans = max(ans, tempArea);

		}
	}

	while(!s.empty()){
		int tp = s.top();
		s.pop();

		int tempArea = hist[tp] * (s.empty() ? i : (i - s.top() - 1));
		ans = max(ans, tempArea);
	}

	return ans;


}

signed main() {
	// freopen("input.txt", "r", stdin);
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		std::vector<int> vec(n);
		for (int i = 0; i < n; ++i)
		{
			/* code */
			cin >> vec[i];
		}

		cout << maxArea(vec, n) << endl;

	}


	return 0;
}


