/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/
#include <bits/stdc++.h>
using namespace std;

int LAP(const vector<int>& vec) {
	int n = vec.size();
	vector<map<int, int>> dp(n);// array of HashMaps

	int ans = 0;
	for (int i = 1; i < n; i++) {
		for (int j = i - 1; j >= 0; j--) {
			int cd = vec[i] - vec[j];
			dp[i][cd] = max(dp[i][cd], dp[j][cd] + 1);
			ans = max(ans, dp[i][cd]);
		}
	}

	return ans + 1;

}

int main() {
	freopen("input.txt", "r", stdin);
	vector<int> vec = {83, 20, 17, 43, 52, 78, 68, 45};
	                  
	cout << LAP(vec) << endl;

	return 0;
}


