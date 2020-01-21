/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
//
//		  _____       _           _        _
//		 / ____|     | |         (_)      | |
//		| (___   __ _| |__  _   _ _       | | __ _ _ __   __ _
//		 \___ \ / _` | '_ \| | | | |  _   | |/ _` | '_ \ / _` |
//		 ____) | (_| | |_) | |_| | | | |__| | (_| | | | | (_| |
//		|_____/ \__,_|_.__/ \__,_| |  \____/ \__,_|_| |_|\__,_|
//		                        _/ |
//		                       |__/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/
#include <bits/stdc++.h>
using namespace std;
#define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//cout<<fixed<<showpoint<<setprecision(12)<<ans<<endl;
#define int long long int
#define double long double
#define PI acos(-1)

void print1d(const vector<int>& vec) {for (auto val : vec) {cout << val << " ";} cout << endl;}

void print2d(const vector<vector<int>>& vec) {for (auto row : vec) {for (auto val : row) {cout << val << " ";} cout << endl;}}

int minSumTr(const vector<vector<int>>& vec) {
	int r = vec.size();
	int c = vec[r - 1].size();

	vector<vector<int>> dp(r, vector<int> (c, 0));
	for (int j = 0; j < c; j++)
		dp[r - 1][j] = vec[r - 1][j];

	for (int i = r - 1; i >= 0; i--) {
		for (int j = 0; j <= i; j++) {
			if (i == r - 1)
				dp[i][j] = vec[i][j];
			else {
				dp[i][j] = vec[i][j] + min(dp[i+1][j], dp[i+1][j+1]);
			}
		}
	}

	// print2d(dp);
	return dp[0][0];
}

signed main() {

	freopen("input.txt", "r", stdin);
	crap;

	vector<vector<int>> vec = {
		{2},
		{3, 4},
		{6, 5, 7},
		{4, 1, 8, 3}
	};

	// print2d(vec);

	cout << minSumTr(vec) << endl;



	return 0;
}




