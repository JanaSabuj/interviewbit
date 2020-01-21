/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/
#include <iostream>
#include <vector>
using namespace std;

void print1d(const vector<int>& vec){
	for(auto val: vec)
		cout << val <<" ";
	cout <<endl;

}

void print2d(const vector<vector<int>>& vec){
	for(auto row: vec){
		for(auto val: row)
			cout << val <<" ";
		cout <<endl;
	}

}

int unique(const vector<vector<int>>& vec) {
	int r = vec.size();
	int c = vec[0].size();

	vector<vector<int>> dp(r, vector<int> (c, 0));
	for (int j = 0; j < c; j++) {
		if (vec[0][j] == 0)
			dp[0][j] = 1;
		else
			break;
	}

	for (int i = 0; i < r; i++) {
		if (vec[i][0] == 0)
			dp[i][0] = 1;
		else
			break;
	}

	for (int i = 1; i < r; i++) {
		for (int j = 1; j < c; j++) {
			if (vec[i][j] == 1)
				dp[i][j] = 0;
			else
				dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
		}
	}


	// print2d(dp);
	return dp[r -1][c - 1];


}

int main() {
	freopen("input.txt", "r", stdin);
	vector<vector<int>> vec = {
		{0, 0, 0},
		{0, 1, 0},
		{0, 0, 0}
	};

	cout << unique(vec) << endl;


	return 0;
}


