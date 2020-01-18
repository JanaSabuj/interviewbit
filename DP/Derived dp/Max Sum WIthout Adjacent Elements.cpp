/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/
#include <bits/stdc++.h>
using namespace std;

int sol(const vector<vector<int>>& vec) {
	int r = 2;
	int c = vec[0].size();

	if (c == 1)
		return max(vec[0][0], vec[1][0]);

	if (c == 2)
		return max({vec[0][0], vec[1][0], vec[0][1], vec[1][1]});

	int max1 = max(vec[0][0], vec[1][0]);
	int max2 = max(vec[0][1], vec[1][1]);

	for (int j = 2; j < c; j++) {

		int tempvalmax = 0;
		for (int i = 0; i < 2; i++) {
			int val = max1 + vec[i][j];
			tempvalmax = max(tempvalmax, val);
		}

		max1 = max(max1, max2);// max till now before 1 element
		max2 = tempvalmax;// max of the present col
	}

	return max(max1, max2);

}

int main() {
	freopen("input.txt", "r", stdin);
	vector<vector<int>> vec = {

		{16, 5, 54, 55, 36, 82, 61, 77, 66, 61},
		{31, 30, 36, 70, 9, 37, 1, 11, 68, 14}

	};

	cout << sol(vec) << endl;
	return 0;
}


